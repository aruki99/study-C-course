// text3.7.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdlib.h>	
#include <time.h>
int _tmain(int argc, _TCHAR* argv[])
{
	int i=1,x1,x2,d,temp,da,sum=0;
	printf("A\t��\tB\t=\t���Ĵ�(������������):\n");	
	for(i;i<=5;i++){	
		d=0;
		srand(time(0));
		x1=rand();	
		x1%=10;			
		if(x1==0){
			x1=10;
		}
		x2=rand();	
		x2%=10;
		if(x2==0){
			x2=10;
		}

		while(d==0||d==1){
			d =rand();	d=(d%10)/2;
		}

		switch(d){
		case 1:
			printf("%d\t+\t%d\t=\t",x1,x2);
			temp=x1+x2;
			break;
		case 2:
			printf("%d\t-\t%d\t=\t",x1,x2);
			temp=x1-x2;
			break;
		case 3:
			printf("%d\t*\t%d\t=\t",x1,x2);
			temp=x1*x2;
			break;
		case 4:
			printf("%d\t/\t%d\t=\t",x1,x2);
			temp=x1/x2;
			break;

			default:
			break;
		}
			scanf("%d",&da);
			if(temp==da){
				sum++;
			}
	}	
	printf("��ԣ�%d��\n",sum);
	printf("���ĳɼ���%d\n",sum*20);	
	return 0;
}


