package com.bill.native_lib_test;

public class NativeLib {

    // Used to load the 'native_lib_test' library on application startup.
    static {
        System.loadLibrary("native_lib_test");
    }

    /**
     * A native method that is implemented by the 'native_lib_test' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();

    // 定义后使用【alt+enter】快捷键，AS会自动在cpp中生成对应native方法
    // 可以查看下java中数据类型和JNI的对应关系
    public native void generateTest(short s, int i, long l, float f, double d, char c,
                                    boolean z, byte b, String str, Object obj, int[] arr);


    // 字符串操作的示例：
    // native将传入的str后面拼接一个字符串
    public native String operateString(String str);

    // Native调用Java静态方法
    public native void callJavaStaticMethod();

    // Native调用Java实例方法
    public native void createAndCallJavaInstanceMethod();

}