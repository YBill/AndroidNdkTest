package com.bill.androidndktest;

import android.app.Application;
import android.content.Context;

/**
 * author ywb
 * date 2022/2/21
 * desc
 */
public class MyApplication extends Application {

    @Override
    protected void attachBaseContext(Context base) {
        super.attachBaseContext(base);
        com.bill.keepalivepro.MyApplication.init(base);
    }

}
