#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_cleanmaster_secret_SecretNative_UrlEncoder_1SIGN_1KEY(JNIEnv *env, jobject thiz,
                                                               jstring speed) {
    const char *strFromJava = (char *) env->GetStringUTFChars(speed, nullptr);

    if (strFromJava == nullptr) {
        return nullptr;
    }

    const char *result = "cmcm123&";

    env->ReleaseStringUTFChars(speed, strFromJava);

    return env->NewStringUTF(result);
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_cleanmaster_secret_SecretNative_Utils_1getDeviceLoginPassWord(JNIEnv *env, jobject thiz,
                                                                       jstring uid) {
    const char *strFromJava = (char *) env->GetStringUTFChars(uid, nullptr);

    if (strFromJava == nullptr) {
        return nullptr;
    }

    const char *result = "12345678";

    env->ReleaseStringUTFChars(uid, strFromJava);

    return env->NewStringUTF(result);
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_cleanmaster_secret_SecretNative_Utils_1LoginSDK_1mAppSalt(JNIEnv *env, jobject thiz,
                                                                   jstring salt) {
    const char *strFromJava = (char *) env->GetStringUTFChars(salt, nullptr);

    if (strFromJava == nullptr) {
        return nullptr;
    }

    const char *result = "l5g9H0ka";

    env->ReleaseStringUTFChars(salt, strFromJava);

    return env->NewStringUTF(result);
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_cleanmaster_secret_SecretNative_RequestUFS_1SDK_1SK2(JNIEnv *env, jobject thiz,
                                                              jstring sk) {
    const char *strFromJava = (char *) env->GetStringUTFChars(sk, nullptr);

    if (strFromJava == nullptr) {
        return nullptr;
    }

    const char *result = "2ba42a014f0c8e92";

    env->ReleaseStringUTFChars(sk, strFromJava);

    return env->NewStringUTF(result);
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_cleanmaster_secret_SecretNative_AESUtil_1KEY_1VALUE(JNIEnv *env, jobject thiz,
                                                             jstring speed) {
    const char *strFromJava = (char *) env->GetStringUTFChars(speed, nullptr);

    if (strFromJava == nullptr) {
        return nullptr;
    }

    const char *result = "c#m%l1!s7d*k9p8w";

    env->ReleaseStringUTFChars(speed, strFromJava);

    return env->NewStringUTF(result);
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_cleanmaster_secret_SecretNative_Supervisor_1aesKey(JNIEnv *env, jobject thiz,
                                                            jstring aes) {
    const char *strFromJava = (char *) env->GetStringUTFChars(aes, nullptr);

    if (strFromJava == nullptr) {
        return nullptr;
    }

    const char *result = "GiH5(yLCVaZR4^-A";

    env->ReleaseStringUTFChars(aes, strFromJava);

    return env->NewStringUTF(result);
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_cleanmaster_secret_SecretNative_Supervisor_1getRsaPubKey(JNIEnv *env, jobject thiz) {
    const char *result = "MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAu+dfUB0uN/XxV4oi3z0IFUL5X0CYTdI9yttjASSwYn3nufO9rmpVmX+xJoV9wI1iYz+Y0HpoKhS4fSdhRuymIPvZTVPXsvR4awAMhAwlh7sgRJN4bNvkzQD8yCfrFQeGDmCAClOIRY5ENyF5ZQC2AYaSKhQvVfoHO2iJ6+W5fZ5DuYhqGTt/Gh2+VjUkIPnHYkL4zbqhT5iLocs+CxZU2xaSBJDkvFHhG9ZIsESx3WcwtCjquLrph8rOupM6u8d4HQzWlPk8jBHbRc9OtYSM3E4+OoQPXBQr55ddul7l62n0QW15Np4N2LvncMuO8gXXddyT1H93Ewf5X4ystdzCxwIDAQAB";
    return env->NewStringUTF(result);
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_cleanmaster_secret_SecretNative_KCacheCloudQueryImp_1Q(JNIEnv *env, jobject thiz,
                                                                jstring def) {

    const char *strFromJava = (char *) env->GetStringUTFChars(def, nullptr);

    if (strFromJava == nullptr) {
        return nullptr;
    }

    const char *result = "stop";

    env->ReleaseStringUTFChars(def, strFromJava);

    return env->NewStringUTF(result);
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_cleanmaster_secret_SecretNative_AnumAsocciationService_1key(JNIEnv *env, jobject thiz,
                                                                     jstring key) {
    const char *strFromJava = (char *) env->GetStringUTFChars(key, nullptr);

    if (strFromJava == nullptr) {
        return nullptr;
    }

    const char *result = "LieBaoCM@%$#^&*~";

    env->ReleaseStringUTFChars(key, strFromJava);

    return env->NewStringUTF(result);
}

extern "C"
JNIEXPORT jbyteArray JNICALL
Java_com_cleanmaster_secret_SecretNative_AppCategoryParam_1KEY(JNIEnv *env, jobject thiz,
                                                               jstring key) {
    const char *strFromJava = (char *) env->GetStringUTFChars(key, nullptr);

    if (strFromJava == nullptr) {
        return nullptr;
    }

    env->ReleaseStringUTFChars(key, strFromJava);

    return env->NewByteArray(16);
}