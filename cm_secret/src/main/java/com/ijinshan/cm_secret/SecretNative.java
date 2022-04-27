package com.ijinshan.cm_secret;

public class SecretNative {

    // Used to load the 'cm_secret' library on application startup.
    static {
        System.loadLibrary("cm_secret");
    }

    /**
     * A native method that is implemented by the 'cm_secret' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();

    public native String MoneyEncode_KEY_TYPE(String key);

    public native String FishUrlIdentify_AES_KEY(String key);

    public native String AESUtils_sKeys(String key);

    public native String Utils_getDeviceLoginPassWord(String key);

    public native String KSDataSyncManager_Key(String key);

    public native String KAES_buildRequestBuffAESKey(String key);

    public native String ReportToICPManager_AES_KEYWORD(String key);

    public native String ScoreDataManager_SECRET_KEY(String key);
}