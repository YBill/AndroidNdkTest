#include <jni.h>
#include <string>
#include <android/log.h>

#define TAG        "Bill"
#define LOGE(...)    __android_log_print(ANDROID_LOG_ERROR, TAG, __VA_ARGS__)
#define LOGW(...)    __android_log_print(ANDROID_LOG_WARN, TAG, __VA_ARGS__)
#define LOGI(...)    __android_log_print(ANDROID_LOG_INFO, TAG, __VA_ARGS__)
#define LOGD(...)    __android_log_print(ANDROID_LOG_DEBUG, TAG, __VA_ARGS__)

extern "C" JNIEXPORT jstring JNICALL
Java_com_bill_native_1lib_1test_NativeLib_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT void JNICALL
Java_com_bill_native_1lib_1test_NativeLib_generateTest(JNIEnv *env, jobject thiz, jshort s, jint i,
                                                       jlong l, jfloat f, jdouble d, jchar c,
                                                       jboolean z, jbyte b, jstring str,
                                                       jobject p, jintArray arr) {
    // TODO: implement ginsengTest()
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_bill_native_1lib_1test_NativeLib_operateString(JNIEnv *env, jobject thiz, jstring str) {
    // 从java的内存中把字符串拷贝出来 在native使用
    const char *strFromJava = (char *) env->GetStringUTFChars(str, NULL);
    if (strFromJava == NULL) {
        // 必须空检查
        return NULL;
    }

    // 将strFromJava拷贝到buff中,待会儿好拿去生成字符串
    char buff[128] = {0};
    strcpy(buff, strFromJava);

    // 拼接字符串
    strcat(buff, " -拼接新内容");

    // 释放资源
    env->ReleaseStringUTFChars(str, strFromJava);

    // 自动转为Unicode
    return env->NewStringUTF(buff);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_bill_native_1lib_1test_NativeLib_callJavaStaticMethod(JNIEnv *env, jobject thiz) {
    // 1. 从classpath路径下搜索MyJNIClass这个类,并返回该类的Class对象
    jclass clazz = env->FindClass("com/bill/native_lib_test/entity/MyJNIClass");

    // 2. 从clazz类中查找getDes方法 得到这个静态方法的方法id
    jmethodID mid_get_des = env->GetStaticMethodID(clazz, "getDes",
                                                   "(Ljava/lang/String;)Ljava/lang/String;");

    // 3. 构建入参,调用static方法,获取返回值
    jstring str_arg = env->NewStringUTF("我是Bill");
    jstring result = (jstring) env->CallStaticObjectMethod(clazz, mid_get_des, str_arg);
    const char *result_str = env->GetStringUTFChars(result, NULL);
    LOGI("获取到Java层返回的数据 : %s", result_str);

    //4. 移除局部引用
    env->DeleteLocalRef(clazz);
    env->DeleteLocalRef(str_arg);
    env->DeleteLocalRef(result);
}


extern "C"
JNIEXPORT void JNICALL
Java_com_bill_native_1lib_1test_NativeLib_createAndCallJavaInstanceMethod(JNIEnv *env,
                                                                          jobject thiz) {
    // 从classpath路径下搜索MyJNIClass这个类
    jclass clazz = env->FindClass("com/bill/native_lib_test/entity/MyJNIClass");

    // 获取构造方法的方法id
    jmethodID mid_construct = env->GetMethodID(clazz, "<init>", "()V");

    // 获取getAge方法的方法id
    jmethodID mid_get_age = env->GetMethodID(clazz, "getAge", "()I");
    jmethodID mid_set_age = env->GetMethodID(clazz, "setAge", "(I)V");
    jobject jobj = env->NewObject(clazz, mid_construct);

    // 调用方法setAge
    env->CallVoidMethod(jobj, mid_set_age, 20);
    // 再调用方法getAge 获取返回值 打印输出
    jint age = env->CallIntMethod(jobj, mid_get_age);
    LOGI("获取到 age = %d", age);

    // 凡是使用是jobject的子类,都需要移除引用
    env->DeleteLocalRef(clazz);
    env->DeleteLocalRef(jobj);
}