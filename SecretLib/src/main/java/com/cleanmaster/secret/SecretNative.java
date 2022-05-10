package com.cleanmaster.secret;

public class SecretNative {

    // Used to load the 'secret' library on application startup.
    static {
        System.loadLibrary("secret");
    }

    /**
     * SnsSigCheck 中 两处调用地方使用 UrlEncoder 类的 SIGN_KEY 常量
     *
     * @param speed 参数无用，但是会判空
     */
    public native String UrlEncoder_SIGN_KEY(String speed);

    /**
     * Utils 中 getDeviceLoginPassWord() 方法
     *
     * @param uid 参数无用，但是会判空
     */
    public native String Utils_getDeviceLoginPassWord(String uid);

    /**
     * Utils 中调用处 LoginSDK 类中 mAppSalt 的值
     */
    public native String Utils_LoginSDK_mAppSalt(String salt);

    /**
     * RequestUFS 中 SDK_SK2 常量
     *
     * @param sk 参数无用，但是会判空
     */
    public native String RequestUFS_SDK_SK2(String sk);

    /**
     * AESUtil 中 KEY_VALUE 常量
     *
     * @param speed 参数无用，但是会判空
     */
    public native String AESUtil_KEY_VALUE(String speed);

    /**
     * Supervisor 中 aesKey 常量
     *
     * @param aes 参数无用，但是会判空
     */
    public native String Supervisor_aesKey(String aes);

    /**
     * Supervisor 中 getRsaPubKey() 方法 （获取公钥）
     */
    public native String Supervisor_getRsaPubKey();

    /**
     * KCacheCloudQueryImp 中拼接的 Q 常量
     */
    public native String KCacheCloudQueryImp_Q(String def);

    /**
     * AnumAsocciationService 中的 key
     */
    public native String AnumAsocciationService_key(String key);

    /**
     * AppCategoryParam 中的 KEY
     */
    public native byte[] AppCategoryParam_KEY(String key);
}