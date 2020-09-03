#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL Java_com_example_cmakedemo_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    auto ss = env->GetVersion();
    std::string sss = std::to_string(ss)+"first cmakeJNI";
    return env->NewStringUTF(sss.c_str());
}
extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_cmakedemo_AndroidJNI_AndroidJNITest(JNIEnv *env, jclass thiz) {
    // TODO: implement AndroidJNITest()
    std::string test = "jjjjj";
    return  env->NewStringUTF(test.c_str());
}