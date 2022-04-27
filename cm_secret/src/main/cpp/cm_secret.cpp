#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_ijinshan_cm_1secret_SecretNative_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_ijinshan_cm_1secret_SecretNative_MoneyEncode_1KEY_1TYPE(JNIEnv *env, jobject thiz, jstring key) {
    const char *strFromJava = (char *) env->GetStringUTFChars(key, NULL);
    if (strFromJava == NULL) {
        return NULL;
    }

    char* result = "tingfengduzou_FFFFFFFFFFFFFFFFFF";

    // 释放资源
    env->ReleaseStringUTFChars(key, strFromJava);

    // 自动转为Unicode
    return env->NewStringUTF(result);
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_ijinshan_cm_1secret_SecretNative_FishUrlIdentify_1AES_1KEY(JNIEnv *env, jobject thiz, jstring key) {
    const char *strFromJava = (char *) env->GetStringUTFChars(key, NULL);
    if (strFromJava == NULL) {
        return NULL;
    }

    char* result = "LKHlhb899Y09olUi";

    // 释放资源
    env->ReleaseStringUTFChars(key, strFromJava);

    // 自动转为Unicode
    return env->NewStringUTF(result);
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_ijinshan_cm_1secret_SecretNative_AESUtils_1sKeys(JNIEnv *env, jobject thiz, jstring key) {
    const char *strFromJava = (char *) env->GetStringUTFChars(key, NULL);
    if (strFromJava == NULL) {
        return NULL;
    }

    char* result = "liebao%^&()@Io=-";

    // 释放资源
    env->ReleaseStringUTFChars(key, strFromJava);

    // 自动转为Unicode
    return env->NewStringUTF(result);
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_ijinshan_cm_1secret_SecretNative_Utils_1getDeviceLoginPassWord(JNIEnv *env, jobject thiz,
                                                                        jstring key) {
    const char *strFromJava = (char *) env->GetStringUTFChars(key, NULL);
    if (strFromJava == NULL) {
        return NULL;
    }

    char buff[128] = {0};
    strcpy(buff, strFromJava);

    // 拼接字符串
    strcat(buff, "12345678");

    // 释放资源
    env->ReleaseStringUTFChars(key, strFromJava);

    // 自动转为Unicode
    return env->NewStringUTF(buff);
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_ijinshan_cm_1secret_SecretNative_KSDataSyncManager_1Key(JNIEnv *env, jobject thiz,
                                                                 jstring key) {
    const char *strFromJava = (char *) env->GetStringUTFChars(key, NULL);
    if (strFromJava == NULL) {
        return NULL;
    }

    char buff[128] = {0};
    strcpy(buff, strFromJava);

    // 拼接字符串
    strcat(buff, "2dd90d7f8aebcf506baf74ea8336e973");

    // 释放资源
    env->ReleaseStringUTFChars(key, strFromJava);

    // 自动转为Unicode
    return env->NewStringUTF(buff);
}
extern "C"
JNIEXPORT jstring JNICALL
Java_com_ijinshan_cm_1secret_SecretNative_KAES_1buildRequestBuffAESKey(JNIEnv *env, jobject thiz,
                                                                       jstring key) {
    const char *strFromJava = (char *) env->GetStringUTFChars(key, NULL);
    if (strFromJava == NULL) {
        return NULL;
    }

    char* result = "x1bgQsyMlpItQkYJWulAfZuLYKlOSDFA";

    // 释放资源
    env->ReleaseStringUTFChars(key, strFromJava);

    // 自动转为Unicode
    return env->NewStringUTF(result);
}
extern "C"
JNIEXPORT jstring JNICALL
Java_com_ijinshan_cm_1secret_SecretNative_ReportToICPManager_1AES_1KEYWORD(JNIEnv *env,
                                                                           jobject thiz,
                                                                           jstring key) {
    const char *strFromJava = (char *) env->GetStringUTFChars(key, NULL);
    if (strFromJava == NULL) {
        return NULL;
    }

    char* result = "eca71c6ad3128e46";

    // 释放资源
    env->ReleaseStringUTFChars(key, strFromJava);

    // 自动转为Unicode
    return env->NewStringUTF(result);
}
extern "C"
JNIEXPORT jstring JNICALL
Java_com_ijinshan_cm_1secret_SecretNative_ScoreDataManager_1SECRET_1KEY(JNIEnv *env, jobject thiz,
                                                                        jstring key) {
    const char *strFromJava = (char *) env->GetStringUTFChars(key, NULL);
    if (strFromJava == NULL) {
        return NULL;
    }

    char* result = "d3d05e2b30f7384a";

    // 释放资源
    env->ReleaseStringUTFChars(key, strFromJava);

    // 自动转为Unicode
    return env->NewStringUTF(result);
}