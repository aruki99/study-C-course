// 测试.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <malloc.h>
#include<string.h>
int way();
int way2();
struct students{
	int s[99][3];	//学生成绩 二维数组 学生人数上限99 3个科目
	int pj[99];		//每个学生的平均成绩
	float pj3[99];		//每个学生平均分的总平均分
	float x,y,z;		//中间值
	char *zw[5];
	char *pjdj[10];
}yjx1;
FILE *fp;
int _tmain(int argc, _TCHAR* argv[])
{
	if((fp=fopen("喻嘉兴测试.txt", "r"))==NULL){
		printf("为你建立新文件\n");
		way();
	}else{
		printf("为你打开已存在文件\n");
		way2();
	}
}
	
	

int way(){
	fp=fopen("喻嘉兴测试.txt","w");
	//制作动态字符串数组  
	int n;
	printf("请输入学生个数(上限99)：");
	scanf("%d",&n);
	char **name=(char **)malloc(n*sizeof(char));
	for(int i=0;i<n;i++)
	{
		name[i]=(char *)malloc(sizeof(char)*10);
	}

	//输入对应学生的成绩
	printf("请输入学生姓名与成绩\n");
	printf("姓名\t语文\t数学\t英语\n");
	for(int i=0;i<n;i++){
		fflush(stdin);
		scanf("%s",name[i]);		//第i位学生名称
		for(int j=0;j<3;j++){
			scanf("%d",&yjx1.s[i][j]);	//第i位学生的三科成绩
			if(yjx1.s[i][j]>100){
				printf("非法输入！\n");
				return 0;
			}
		}
	}

	printf(" \n");
	printf("姓名\t语文\t数学\t英语\t平均分\t等级\n");
	for(int i=0;i<n;i++){
		printf("%s\t",name[i]);				//输出第i位学生名称
		fprintf(fp,"%s\t",name[i]); 
		for(int i=0;i<n;i++){
		//求每一科的总分
		yjx1.x=yjx1.x+yjx1.s[i][0];
		yjx1.y=yjx1.y+yjx1.s[i][1];
		yjx1.z=yjx1.z+yjx1.s[i][2];
	}
		//求每一科的平均分
		yjx1.pj3[0]=yjx1.x/n;
		yjx1.pj3[1]=yjx1.y/n;
		yjx1.pj3[2]=yjx1.z/n;
		//求每科平均分的总平均分
		yjx1.pj3[3]=(yjx1.pj3[0]+yjx1.pj3[1]+yjx1.pj3[2])/3;
		//求一人三科的平均分
		yjx1.pj[i]=(yjx1.s[i][0]+yjx1.s[i][1]+yjx1.s[i][2])/3;
		if(yjx1.pj[i]>=90){
				yjx1.zw[i] = "优秀";
			}
			else if(yjx1.pj[i]>=80){
				yjx1.zw[i] = "好";
			}
			else if(yjx1.pj[i]>=70){
				yjx1.zw[i] = "良好";
			}
			else if(yjx1.pj[i]>=60){
				yjx1.zw[i] = "及格";
			}
			else{
				yjx1.zw[i] = "不及格";
			}
	
			//循环输出
		for(int j=0;j<3;j++){
			printf("%d\t",yjx1.s[i][j]);
		 fprintf(fp,"%d\t",yjx1.s[i][j]);
		}
			printf("%d\t",yjx1.pj[i]);
			printf("%s",yjx1.zw[i]);
			printf("\n");
			 fprintf(fp,"%d\t%s\n",yjx1.pj[i],yjx1.zw[i]);
		
	}
	//判断每科平均分的总平均分的等级
	if(yjx1.pj3[3]/n >=90){
				yjx1.pjdj[1] = "优秀";
			}
			else if(yjx1.pj3[3]/n>=80){
				yjx1.pjdj[1] = "好";
			}
			else if(yjx1.pj3[3]/n>=70){
				yjx1.pjdj[1] = "良好";
			}
			else if(yjx1.pj3[3]/n>=60){
				yjx1.pjdj[1] = "及格";
			}
			else{
				yjx1.pjdj[1] = "不及格";
			}
	
	printf("平均分\t%.2f\t%.2f\t%.2f\t%.2f\t%s\n",yjx1.pj3[0]/n,yjx1.pj3[1]/n,yjx1.pj3[2]/n,yjx1.pj3[3]/n,yjx1.pjdj[1]);
	 fprintf(fp,"平均分\t%.2f\t%.2f\t%.2f\t%.2f\t%s\n",yjx1.pj3[0]/n,yjx1.pj3[1]/n,yjx1.pj3[2]/n,yjx1.pj3[3]/n,yjx1.pjdj[1]);
   fclose(fp);	
	
	return 0;
}

int way2(){
	fp=fopen("喻嘉兴测试.txt","r");
	//制作动态字符串数组  
	int n=5;

	char **name=(char **)malloc(n*sizeof(char));

	for(int i=0;i<n;i++){
		fflush(stdin);
		}
	/*
	printf("请输入学生个数(上限99)：");
	scanf("%d",&n);
	
		for(int i=0;i<n;i++)
	{
		name[i]=(char *)malloc(sizeof(char)*10);
	}

	//输入对应学生的成绩
	printf("请输入学生姓名与成绩\n");
	printf("姓名\t语文\t数学\t英语\n");
	
	}
	**/

	printf(" \n");
	printf("姓名\t语文\t数学\t英语\t平均分\t等级\n");
	for(int i=0;i<n;i++){
		fscanf(fp,"%s",&name[i]); 
		printf("%s\t",name[i]);				//输出第i位学生名称
		for(int i=0;i<n;i++){
		//求每一科的总分
		yjx1.x=yjx1.x+yjx1.s[i][0];
		yjx1.y=yjx1.y+yjx1.s[i][1];
		yjx1.z=yjx1.z+yjx1.s[i][2];
	}
		//求每一科的平均分
		yjx1.pj3[0]=yjx1.x/n;
		yjx1.pj3[1]=yjx1.y/n;
		yjx1.pj3[2]=yjx1.z/n;
		//求每科平均分的总平均分
		yjx1.pj3[3]=(yjx1.pj3[0]+yjx1.pj3[1]+yjx1.pj3[2])/3;
		//求一人三科的平均分
		yjx1.pj[i]=(yjx1.s[i][0]+yjx1.s[i][1]+yjx1.s[i][2])/3;
		if(yjx1.pj[i]>=90){
				yjx1.zw[i] = "优秀";
			}
			else if(yjx1.pj[i]>=80){
				yjx1.zw[i] = "好";
			}
			else if(yjx1.pj[i]>=70){
				yjx1.zw[i] = "良好";
			}
			else if(yjx1.pj[i]>=60){
				yjx1.zw[i] = "及格";
			}
			else{
				yjx1.zw[i] = "不及格";
			}
	
			//循环输出
		for(int j=0;j<3;j++){
			fscanf(fp,"%d",&yjx1.s[i][j]);
			printf("%d\t",yjx1.s[i][j]);
		
		}
		 fscanf(fp,"%d",&yjx1.pj[i]);
		  fscanf(fp,"%s",&yjx1.zw[i]);
			printf("%d\t",yjx1.pj[i]);
			printf("%s",yjx1.zw[i]);
			printf("\n");
			
			
	}
	//判断每科平均分的总平均分的等级
	if(yjx1.pj3[3]/n >=90){
				yjx1.pjdj[1] = "优秀";
			}
			else if(yjx1.pj3[3]/n>=80){
				yjx1.pjdj[1] = "好";
			}
			else if(yjx1.pj3[3]/n>=70){
				yjx1.pjdj[1] = "良好";
			}
			else if(yjx1.pj3[3]/n>=60){
				yjx1.pjdj[1] = "及格";
			}
			else{
				yjx1.pjdj[1] = "不及格";
			}
	fscanf(fp,"%.2f%.2f%.2f%.2f%s",&yjx1.pj3[0],&yjx1.pj3[1],&yjx1.pj3[2],&yjx1.pj3[3],&yjx1.pjdj[1]);
	printf("平均分\t%.2f\t%.2f\t%.2f\t%.2f\t%s\n",yjx1.pj3[0]/n,yjx1.pj3[1]/n,yjx1.pj3[2]/n,yjx1.pj3[3]/n,yjx1.pjdj[1]);
   fclose(fp);	
	
	return 0;
}