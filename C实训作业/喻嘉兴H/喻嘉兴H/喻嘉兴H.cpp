// 喻嘉兴H.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<math.h>
#include<system_error>
int qian=0;
int ruku(int qian);
int chuku(int qian);
int chaxun(int qian);
int way();
int x;
int _tmain(int argc, _TCHAR* argv[])
{
	
	FILE *fp;
	//rb wb r w r+ w+ rb+ wb+ 
	if((fp=fopen("yjx.wlb", "rb"))==NULL){		//第一次运行程序的时候
		printf("为你建立新文件\n");
		fp=fopen("yjx.wlb", "wb");
		way();
		//fprintf(fp,"%d",qian);
		fwrite(&qian,sizeof(int),1,fp);
		fclose(fp);
	}else{										//再次运行程序的逻辑
		printf("为你打开已存在文件\n");
		fp=fopen("yjx.wlb", "rb");
		//fscanf(fp,"%d",&qian);
		fread(&qian,sizeof(int),1,fp);
		fclose(fp);
		way();
		fp=fopen("yjx.wlb", "wb");
		fwrite(&qian,sizeof(int),1,fp);
		fclose(fp);
	}
	

}








//函数
int way(){
	for(;;){
	printf("--------------------\n\n");
	printf("家庭收支登记程序\n");
	printf("   作者:喻嘉兴\n");
	printf("\n");
	printf("1、收入登记\n");
	printf("2、支出登记\n");
	printf("3、余额查询\n");
	printf("4、结束操作\n");
	printf("请输入操作号（1-4）:");
	scanf("%d",&x);
	switch (x){
	case 1:
		ruku(qian);
		system("pause");
		break;
		
	case 2:
		chuku(qian);
		system("pause");
		break;
		
	case 3:
		chaxun(qian);
		system("pause");
		break;
	case 4:
		printf("谢谢，再见！\n");
		return 0;
		break;
	
	}
	system("cls");
	}
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
		return qian;
}

int chaxun(int qian){
	printf("现在余额%d\n",qian);
	return qian;
}

