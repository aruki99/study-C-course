// 喻嘉兴G.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<math.h>
#include<system_error>
int qian=0;
int ruku(int shouru);
int chuku(int zhichu);
int chaxun(int qian);
void meun();

int _tmain(int argc, _TCHAR* argv[])
{
	int x,shouru=0,zhichu=0;
	for(;;){
	meun();
	scanf("%d",&x);	//选着功能
	switch (x){
	case 1:
		ruku(shouru);
		break;
	case 2:
		chuku(zhichu);
		break;
	case 3:
		chaxun(qian);
		break;
	case 4:
		printf("谢谢，再见！\n");
		return 0;
		break;
	}
	system("cls");	//清空屏幕
	}
}



void meun(){
printf("--------------------\n\n");
	printf("家庭收支登记程序\n");
	printf("   作者:喻嘉兴\n");
	printf("\n");
	printf("1、收入登记\n");
	printf("2、支出登记\n");
	printf("3、余额查询\n");
	printf("4、结束操作\n");
	printf("请输入操作号（1-4）:");
}


int ruku(int shouru){
	printf("--收入登记--\n");
		printf("原始余额%d\n",qian);
		printf("本期收入：");
		scanf("%d",&shouru);
		if(shouru<0){
			printf("登记失败!\n");
			return 0;
		}
		qian=qian+shouru;
		printf("现在余额%d\n",qian);
		system("pause");	//按任意键继续
		return qian;

}

int chuku(int zhichu){
	printf("--支出登记--\n");
		printf("原始余额%d\n",qian);
		printf("本期支出：");
		scanf("%d",&zhichu);
		if(zhichu<0){
			printf("登记失败!\n");
			return 0;
		}
		qian=qian-zhichu;
		printf("现在余额%d\n",qian);
		system("pause");
		return qian;
}

int chaxun(int x){
	printf("现在余额%d\n",qian);
	system("pause");
	return qian;
}

