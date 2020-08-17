// 喻嘉兴I.cpp : 定义控制台应用程序的入口点。
//
//	仓库领料管理
#include "stdafx.h"
#include<system_error>
void meun();
int chuku();
int ruku();
int way();

int xz=0,chose,xzs;
char *sm[10]={"1、语文","2、数学","3、英语","4、历史","5、地理"};
int sl[5]={999,999,999,999,999};
FILE *fp;

int _tmain(int argc, _TCHAR* argv[])
{	
		if((fp=fopen("yjx.wlb", "rb"))==NULL){
		printf("为你建立新文件\n");		
		fp=fopen("yjx.wlb", "wb");
		way();
		fwrite(&xzs,sizeof(int),99,fp);
		fwrite(&sl[xzs-1],sizeof(int),99,fp);
		fclose(fp);
		
	}else{
		printf("为你打开已存在文件\n");
		fp=fopen("yjx.wlb", "rb");
		fread(&xzs,sizeof(int),1,fp);
		fread(&sl[xzs-1],sizeof(int),1,fp);
		fclose(fp);
		fp=fopen("yjx.wlb", "wb");
		way();
		fwrite(&xzs,sizeof(int),1,fp);
		fwrite(&sl[xzs-1],sizeof(int),1,fp);
		fclose(fp);	
	}
}


int way(){
printf("欢迎来到资料仓库\n");
	for(;;){
	meun();										
	scanf("%d",&chose);
	if(chose==1){
	chuku();system("pause");
	}else if(chose==2){
	ruku();system("pause");
	}else if(chose==3){
		printf("再见！\n");
		return 0;
	}else{
		printf("非法输入！\n");
		printf("请重新选择！\n");
	}
	system("cls");
	}
	return 0;	
}



void meun(){
	printf("\n\n目前有这些书本\n");
	printf("|--------------------|\n");
	for(int i=0;i<5;i++){
			printf("|%s\t%d本|\n",sm[i],sl[i]);
	}
	
	printf("|--------------------|\n");


	printf("1、取书\t2、书本入库3、离开仓库\n");
	printf("请选择操作:");
}


int chuku(){
	printf("选择你要取走的书本与数量\n");
	printf("请输入书本序号:");
	scanf("%d",&xzs);
	if(xzs>5 || xzs<0){
		printf("非法输入！\n");
		return 0;
	}
	switch (xzs){
	case 1:		
	case 2:	
	case 3:	
	case 4:	
	case 5:
		printf("请输入需要取走的数量:");
			scanf("%d",&xz);
			sl[xzs-1]=sl[xzs-1]-xz;
			if(sl[xzs-1]<0){
				printf("对不起，没有那么多的库存\n");
				return 0;
			}
			printf("%s剩余数量%d\n",sm[xzs-1],sl[xzs-1]);
			 default:
			break;
	}
}


int ruku(){
printf("选择你要入库的书本与数量\n");
	printf("请输入书本序号:");
	scanf("%d",&xzs);
	if(xzs>5 || xzs<0){
		printf("非法输入！\n");
		return 0;
	}
	switch (xzs){
	case 1:		
	case 2:	
	case 3:	
	case 4:	
	case 5:
		printf("请输入需要入库的数量:");
			scanf("%d",&xz);
			sl[xzs-1]=sl[xzs-1]+xz;
		
			printf("%s剩余数量%d\n",sm[xzs-1],sl[xzs-1]);
			 default:
			break;
	}
}