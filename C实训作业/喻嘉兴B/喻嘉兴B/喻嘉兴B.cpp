// 测试.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <malloc.h>
#include<string.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int s[99][3];	//学生成绩 二维数组 学生人数上限99 3个科目
	int pj[99];		//每个学生的平均成绩
	float pj3[99];		//每个学生平均分的总平均分
	float x=0,y=0,z=0;		//中间值
	char *zw[5]={""};		//中文形式的等级“优秀，良好”，需要赋初值
	//制作动态字符串数组  
	int n;
	printf("请输入学生个数");
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
			scanf("%d",&s[i][j]);	//第i位学生的三科成绩
			if(s[i][j]>100){
				printf("非法输入！\n");
				return 0;
			}
		}
	}

	printf(" \n");
	printf("姓名\t语文\t数学\t英语\t平均分\t等级\n");
	for(int i=0;i<n;i++){
		printf("%s\t",name[i]);				//输出第i位学生名称
		for(int i=0;i<n;i++){
		//求每一科的总分
		x=x+s[i][0];
		y=y+s[i][1];
		z=z+s[i][2];
	}
		//求每一科的平均分
		pj3[0]=x/n;
		pj3[1]=y/n;
		pj3[2]=z/n;
		//求每科平均分的总平均分
		pj3[3]=(pj3[0]+pj3[1]+pj3[2])/3;
		//求一人三科的平均分
		pj[i]=(s[i][0]+s[i][1]+s[i][2])/3;
			if(pj[i]>=90){
				zw[i] = "优秀";
			}
			else if(pj[i]>=80){
				zw[i] = "好";
			}
			else if(pj[i]>=70){
				zw[i] = "良好";
			}
			else if(pj[i]>=60){
				zw[i] = "及格";
			}
			else{
				zw[i] = "不及格";
			}
			//循环输出
		for(int j=0;j<3;j++)
			printf("%d\t",s[i][j]);
			printf("%d\t",pj[i]);
			printf("%s",zw[i]);
			printf("\n");
		
		
	}
	//判断每科平均分的总平均分的等级
	char *pjdj[10]={""};
			if(pj3[3]/n >=90){
				pjdj[1] = "优秀";
			}
			else if(pj3[3]/n>=80){
				pjdj[1] = "好";
			}
			else if(pj3[3]/n>=70){
				pjdj[1] = "良好";
			}
			else if(pj3[3]/n>=60){
				pjdj[1] = "及格";
			}
			else{
				pjdj[1] = "不及格";
			}
	printf("平均分\t%.2f\t%.2f\t%.2f\t%.2f\t%s\n",pj3[0]/n,pj3[1]/n,pj3[2]/n,pj3[3]/n,pjdj[1]);
		
	
	return 0;
}
	
	

