// 喻嘉兴E.cpp : 定义控制台应用程序的入口点。
//5、	求数列1，3/2!，5/3!，7/4!，9/5!……前n项之和。要求：求n!必须通过函数实现。输出格式不论，简单明了就好完成

#include "stdafx.h"
int _tmain(int argc, _TCHAR* argv[])
{
	float n=0.0,s,sum=0.0;
	float 方法(float n);

	printf("请输入一个整数");
	scanf("%f",&n);
	for(float i=1;i<=n;i++){
		s=((i*2)-1)/方法(i);
		sum=sum+s;
	}
	printf("前n项阶乘和为%.2f\n",sum);
}

float 方法(float n){
	int x,y=1;
	for(x=1;x<=n;x++){ //n等于3  x=2 x=3
		y=y*x;			//y=1*1=1  y=1*2=2 y=2*3=6
	}
	return y;
}

