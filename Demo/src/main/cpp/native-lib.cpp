#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_reactjs_devwithsnell_devwithsnell_Demo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "DevWithSNELL";
    return env->NewStringUTF(hello.c_str());
}
