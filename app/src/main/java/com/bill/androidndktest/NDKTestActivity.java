package com.bill.androidndktest;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

import com.bill.native_lib_test.NativeLib;

public class NDKTestActivity extends AppCompatActivity {

    private final NativeLib nativeLib = new NativeLib();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_ndktest);

        TextView textView = findViewById(R.id.tv_title);

        String str = "原始str";
        textView.setText(nativeLib.operateString(str));

    }

    public void handleClickStaticMethod(View view) {
        nativeLib.callJavaStaticMethod();
    }

    public void handleClickInstanceMethod(View view) {
        nativeLib.createAndCallJavaInstanceMethod();
    }

}