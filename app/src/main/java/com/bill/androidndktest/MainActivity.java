package com.bill.androidndktest;

import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;

import androidx.appcompat.app.AppCompatActivity;

import com.bill.nativelib.NativeLib;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        TextView textView = findViewById(R.id.tv_title);

        NativeLib nativeLib = new NativeLib();
        String title = nativeLib.stringFromJNI();

        Log.e("Bill", "title = " + title);

        textView.setText(title);


        Intent intent = new Intent(this, NDKTestActivity.class);
        startActivity(intent);

    }
}