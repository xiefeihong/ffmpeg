package com.media.utils.ffmpeg;

public class FFmpeg {
    public native String stringFromJNI();

    static {
        System.loadLibrary("ffmpeg");
    }

}