package com.immortal.aegis.native1.export;

import android.util.Log;

/**
 * author ywb
 * date 2022/2/21
 * desc
 */
public class AegisNative {

    static {
        try {
            System.loadLibrary("aegis");
        } catch (Exception e) {
            Log.e("Bill", "System.loadLibrary error:", e);
        }
    }

    public static final native int log(String msg);

}
