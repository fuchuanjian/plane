#include "JniUtil.h"
//const char * CLASSNAME = "com/chuanonly/plane/Util";
#define CLASSNAME  "com/chuanonly/plane/Util"

void JniUtil::showAd()
{
	JniMethodInfo method;
	bool isHave = JniHelper::getStaticMethodInfo(method, CLASSNAME,"showAd","()V");
	method.env->CallStaticVoidMethod(method.classID, method.methodID);
}

void JniUtil::hideAd()
{
	
	JniMethodInfo method;
	bool isHave = JniHelper::getStaticMethodInfo(method, CLASSNAME,"hideAd","()V");
	method.env->CallStaticVoidMethod(method.classID, method.methodID);
	
}

void JniUtil::checkAPP()
{
	
	JniMethodInfo method;
	bool isHave = JniHelper::getStaticMethodInfo(method, CLASSNAME,"checkAPP","()V");
	method.env->CallStaticVoidMethod(method.classID, method.methodID);
	
}



