// 测试.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <malloc.h>
#include<string.h>

struct students{
	int s[99][3];	//学生成绩 二维数组 学生人数上限99 3个科目
	int pj[99];		//每个学生的平均成绩
	float pj3[99];		//每个学生平均分的总平均分
	float x,y,z;		//中间值
	char *zw[5];
	char *pjdj[10];
}yjx1;

int _tmain(int argc, _TCHAR* argv[])
{
		//中文形式的等级“优秀，良好”，需要赋初值
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
		switch (yjx1.pj[i]/10){
		case 10:
		case 9:yjx1.zw[i] = "优秀";break;
		case 8:yjx1.zw[i] = "好";break;
		case 7:yjx1.zw[i] = "良好";break;
		case 6:yjx1.zw[i] = "及格";break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:yjx1.zw[i] = "不及格";
		default:
		break;
		}
	
			//循环输出
		for(int j=0;j<3;j++)
			printf("%d\t",yjx1.s[i][j]);
			printf("%d\t",yjx1.pj[i]);
			printf("%s",yjx1.zw[i]);
			printf("\n");
		
		
	}
	//判断每科平均分的总平均分的等级
	int fs=yjx1.pj3[3]/n/10;
	switch (fs){
		case 10:
		case 9:yjx1.pjdj[1] = "优秀";
		case 8:yjx1.pjdj[1] = "好";break;
		case 7:yjx1.pjdj[1] = "良好";break;
		case 6:yjx1.pjdj[1] = "及格";break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:yjx1.pjdj[1] = "不及格";
		default:
		break;
		}
	
	printf("平均分\t%.2f\t%.2f\t%.2f\t%.2f\t%s\n",yjx1.pj3[0]/n,yjx1.pj3[1]/n,yjx1.pj3[2]/n,yjx1.pj3[3]/n,yjx1.pjdj[1]);
		
	
	return 0;
}
	
	

