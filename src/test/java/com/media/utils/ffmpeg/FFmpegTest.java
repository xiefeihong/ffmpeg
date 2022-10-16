package com.media.utils.ffmpeg;

import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

public class FFmpegTest {
    FFmpeg ffmpeg;

    @BeforeEach
    public void before() {
        ffmpeg = new FFmpeg();
    }

    @Test
    public void testFFmpeg() {
        System.out.println(ffmpeg.stringFromJNI());
    }

}
