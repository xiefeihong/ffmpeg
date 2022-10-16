#include <jni.h>
#include <iostream>

extern "C"{
//#include "fftools/ffmpeg.h"
#include <libavcodec/avcodec.h>
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_media_utils_ffmpeg_FFmpeg_stringFromJNI2(
        JNIEnv* env,
        jobject) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_media_utils_ffmpeg_FFmpeg_stringFromJNI(
        JNIEnv* env, jobject) {
    return env->NewStringUTF(avcodec_configuration());
}
