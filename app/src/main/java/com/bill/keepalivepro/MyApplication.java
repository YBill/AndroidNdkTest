package com.bill.keepalivepro;

import android.annotation.SuppressLint;
import android.content.Context;

/**
 * author ywb
 * date 2022/2/21
 * desc
 */
public class MyApplication {

    @SuppressLint("StaticFieldLeak")
    protected static Context sContext = null;

    public static Context getContext() {
        return sContext;
    }

    public static void init(Context context) {
        MyApplication.sContext = context;
    }

}
