cmake_minimum_required(VERSION 3.22)
project(ffmpeg)

set(CMAKE_CXX_STANDARD 23)

set(LIBS avcodec avdevice avfilter avformat avutil postproc swscale swresample)

IF (UNIX)
	set(JAVA_INCLUDE_SUFFIX linux)
ELSEIF (WIN32)
	set(JAVA_INCLUDE_SUFFIX win32)
ELSEIF (APPLE)
	set(JAVA_INCLUDE_SUFFIX darwin)
ENDIF ()

#include_directories(../include . $ENV{JAVA_HOME}/include $ENV{JAVA_HOME}/include/${JAVA_INCLUDE_SUFFIX})
include_directories(/usr/local/ffmpeg/include . $ENV{JAVA_HOME}/include $ENV{JAVA_HOME}/include/${JAVA_INCLUDE_SUFFIX})
#link_directories(../lib/x86_64)
link_directories(/usr/local/ffmpeg/lib)

file(GLOB FF_LIBS fftools/*.c)
add_library(ffmpeg SHARED ${FF_LIBS} native-lib.cpp)
target_link_libraries (ffmpeg ${LIBS})
