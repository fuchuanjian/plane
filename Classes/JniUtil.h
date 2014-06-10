#ifndef __Moon3d__JNIUTIL__
#define __Moon3d__JNIUTIL__

#include <iostream>
#include "cocos2d.h"
#include "platform/android/jni/JniHelper.h"
USING_NS_CC;
class JniUtil {
public:
    static void showAd();
	static void hideAd();
	static void checkAPP();
};

#endif 
