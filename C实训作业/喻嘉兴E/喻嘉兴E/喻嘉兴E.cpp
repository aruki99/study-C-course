// ������E.cpp : �������̨Ӧ�ó������ڵ㡣
//5��	������1��3/2!��5/3!��7/4!��9/5!����ǰn��֮�͡�Ҫ����n!����ͨ������ʵ�֡������ʽ���ۣ������˾ͺ����

#include "stdafx.h"
int _tmain(int argc, _TCHAR* argv[])
{
	float n=0.0,s,sum=0.0;
	float ����(float n);

	printf("������һ������");
	scanf("%f",&n);
	for(float i=1;i<=n;i++){
		s=((i*2)-1)/����(i);
		sum=sum+s;
	}
	printf("ǰn��׳˺�Ϊ%.2f\n",sum);
}

float ����(float n){
	int x,y=1;
	for(x=1;x<=n;x++){ //n����3  x=2 x=3
		y=y*x;			//y=1*1=1  y=1*2=2 y=2*3=6
	}
	return y;
}

