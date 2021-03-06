//
// Created by Sirius on 2019/4/26.
//
#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
#include "AdmobHelper.h"
#include "platform/android/jni/JniHelper.h"
#include <jni.h>
#include <android/log.h>
const char* NativeActivityClassName = "org/cocos2dx/cpp/AppActivity";
void AdmobHelper::showBanner()
{
    cocos2d::JniMethodInfo t;
    if (cocos2d::JniHelper::getStaticMethodInfo(t, NativeActivityClassName, "showBanner", "()V"))
    {
        t.env->CallStaticVoidMethod(t.classID, t.methodID);
        t.env->DeleteLocalRef(t.classID);
    }
}

void AdmobHelper::showFullAd()
{
    cocos2d::JniMethodInfo t;
    if (cocos2d::JniHelper::getStaticMethodInfo(t, NativeActivityClassName, "showFullAd", "()V"))
    {
        t.env->CallStaticVoidMethod(t.classID, t.methodID);
        t.env->DeleteLocalRef(t.classID);
    }
}
#endif