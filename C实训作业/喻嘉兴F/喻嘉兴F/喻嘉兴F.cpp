// ����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <malloc.h>
#include<string.h>
int way();
int way2();
struct students{
	int s[99][3];	//ѧ���ɼ� ��ά���� ѧ����������99 3����Ŀ
	int pj[99];		//ÿ��ѧ����ƽ���ɼ�
	float pj3[99];		//ÿ��ѧ��ƽ���ֵ���ƽ����
	float x,y,z;		//�м�ֵ
	char *zw[5];
	char *pjdj[10];
}yjx1;
FILE *fp;
int _tmain(int argc, _TCHAR* argv[])
{
	if((fp=fopen("�����˲���.txt", "r"))==NULL){
		printf("Ϊ�㽨�����ļ�\n");
		way();
	}else{
		printf("Ϊ����Ѵ����ļ�\n");
		way2();
	}
}
	
	

int way(){
	fp=fopen("�����˲���.txt","w");
	//������̬�ַ�������  
	int n;
	printf("������ѧ������(����99)��");
	scanf("%d",&n);
	char **name=(char **)malloc(n*sizeof(char));
	for(int i=0;i<n;i++)
	{
		name[i]=(char *)malloc(sizeof(char)*10);
	}

	//�����Ӧѧ���ĳɼ�
	printf("������ѧ��������ɼ�\n");
	printf("����\t����\t��ѧ\tӢ��\n");
	for(int i=0;i<n;i++){
		fflush(stdin);
		scanf("%s",name[i]);		//��iλѧ������
		for(int j=0;j<3;j++){
			scanf("%d",&yjx1.s[i][j]);	//��iλѧ�������Ƴɼ�
			if(yjx1.s[i][j]>100){
				printf("�Ƿ����룡\n");
				return 0;
			}
		}
	}

	printf(" \n");
	printf("����\t����\t��ѧ\tӢ��\tƽ����\t�ȼ�\n");
	for(int i=0;i<n;i++){
		printf("%s\t",name[i]);				//�����iλѧ������
		fprintf(fp,"%s\t",name[i]); 
		for(int i=0;i<n;i++){
		//��ÿһ�Ƶ��ܷ�
		yjx1.x=yjx1.x+yjx1.s[i][0];
		yjx1.y=yjx1.y+yjx1.s[i][1];
		yjx1.z=yjx1.z+yjx1.s[i][2];
	}
		//��ÿһ�Ƶ�ƽ����
		yjx1.pj3[0]=yjx1.x/n;
		yjx1.pj3[1]=yjx1.y/n;
		yjx1.pj3[2]=yjx1.z/n;
		//��ÿ��ƽ���ֵ���ƽ����
		yjx1.pj3[3]=(yjx1.pj3[0]+yjx1.pj3[1]+yjx1.pj3[2])/3;
		//��һ�����Ƶ�ƽ����
		yjx1.pj[i]=(yjx1.s[i][0]+yjx1.s[i][1]+yjx1.s[i][2])/3;
		if(yjx1.pj[i]>=90){
				yjx1.zw[i] = "����";
			}
			else if(yjx1.pj[i]>=80){
				yjx1.zw[i] = "��";
			}
			else if(yjx1.pj[i]>=70){
				yjx1.zw[i] = "����";
			}
			else if(yjx1.pj[i]>=60){
				yjx1.zw[i] = "����";
			}
			else{
				yjx1.zw[i] = "������";
			}
	
			//ѭ�����
		for(int j=0;j<3;j++){
			printf("%d\t",yjx1.s[i][j]);
		 fprintf(fp,"%d\t",yjx1.s[i][j]);
		}
			printf("%d\t",yjx1.pj[i]);
			printf("%s",yjx1.zw[i]);
			printf("\n");
			 fprintf(fp,"%d\t%s\n",yjx1.pj[i],yjx1.zw[i]);
		
	}
	//�ж�ÿ��ƽ���ֵ���ƽ���ֵĵȼ�
	if(yjx1.pj3[3]/n >=90){
				yjx1.pjdj[1] = "����";
			}
			else if(yjx1.pj3[3]/n>=80){
				yjx1.pjdj[1] = "��";
			}
			else if(yjx1.pj3[3]/n>=70){
				yjx1.pjdj[1] = "����";
			}
			else if(yjx1.pj3[3]/n>=60){
				yjx1.pjdj[1] = "����";
			}
			else{
				yjx1.pjdj[1] = "������";
			}
	
	printf("ƽ����\t%.2f\t%.2f\t%.2f\t%.2f\t%s\n",yjx1.pj3[0]/n,yjx1.pj3[1]/n,yjx1.pj3[2]/n,yjx1.pj3[3]/n,yjx1.pjdj[1]);
	 fprintf(fp,"ƽ����\t%.2f\t%.2f\t%.2f\t%.2f\t%s\n",yjx1.pj3[0]/n,yjx1.pj3[1]/n,yjx1.pj3[2]/n,yjx1.pj3[3]/n,yjx1.pjdj[1]);
   fclose(fp);	
	
	return 0;
}

int way2(){
	fp=fopen("�����˲���.txt","r");
	//������̬�ַ�������  
	int n=5;

	char **name=(char **)malloc(n*sizeof(char));

	for(int i=0;i<n;i++){
		fflush(stdin);
		}
	/*
	printf("������ѧ������(����99)��");
	scanf("%d",&n);
	
		for(int i=0;i<n;i++)
	{
		name[i]=(char *)malloc(sizeof(char)*10);
	}

	//�����Ӧѧ���ĳɼ�
	printf("������ѧ��������ɼ�\n");
	printf("����\t����\t��ѧ\tӢ��\n");
	
	}
	**/

	printf(" \n");
	printf("����\t����\t��ѧ\tӢ��\tƽ����\t�ȼ�\n");
	for(int i=0;i<n;i++){
		fscanf(fp,"%s",&name[i]); 
		printf("%s\t",name[i]);				//�����iλѧ������
		for(int i=0;i<n;i++){
		//��ÿһ�Ƶ��ܷ�
		yjx1.x=yjx1.x+yjx1.s[i][0];
		yjx1.y=yjx1.y+yjx1.s[i][1];
		yjx1.z=yjx1.z+yjx1.s[i][2];
	}
		//��ÿһ�Ƶ�ƽ����
		yjx1.pj3[0]=yjx1.x/n;
		yjx1.pj3[1]=yjx1.y/n;
		yjx1.pj3[2]=yjx1.z/n;
		//��ÿ��ƽ���ֵ���ƽ����
		yjx1.pj3[3]=(yjx1.pj3[0]+yjx1.pj3[1]+yjx1.pj3[2])/3;
		//��һ�����Ƶ�ƽ����
		yjx1.pj[i]=(yjx1.s[i][0]+yjx1.s[i][1]+yjx1.s[i][2])/3;
		if(yjx1.pj[i]>=90){
				yjx1.zw[i] = "����";
			}
			else if(yjx1.pj[i]>=80){
				yjx1.zw[i] = "��";
			}
			else if(yjx1.pj[i]>=70){
				yjx1.zw[i] = "����";
			}
			else if(yjx1.pj[i]>=60){
				yjx1.zw[i] = "����";
			}
			else{
				yjx1.zw[i] = "������";
			}
	
			//ѭ�����
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
	//�ж�ÿ��ƽ���ֵ���ƽ���ֵĵȼ�
	if(yjx1.pj3[3]/n >=90){
				yjx1.pjdj[1] = "����";
			}
			else if(yjx1.pj3[3]/n>=80){
				yjx1.pjdj[1] = "��";
			}
			else if(yjx1.pj3[3]/n>=70){
				yjx1.pjdj[1] = "����";
			}
			else if(yjx1.pj3[3]/n>=60){
				yjx1.pjdj[1] = "����";
			}
			else{
				yjx1.pjdj[1] = "������";
			}
	fscanf(fp,"%.2f%.2f%.2f%.2f%s",&yjx1.pj3[0],&yjx1.pj3[1],&yjx1.pj3[2],&yjx1.pj3[3],&yjx1.pjdj[1]);
	printf("ƽ����\t%.2f\t%.2f\t%.2f\t%.2f\t%s\n",yjx1.pj3[0]/n,yjx1.pj3[1]/n,yjx1.pj3[2]/n,yjx1.pj3[3]/n,yjx1.pjdj[1]);
   fclose(fp);	
	
	return 0;
}