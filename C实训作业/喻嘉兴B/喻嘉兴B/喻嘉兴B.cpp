// ����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <malloc.h>
#include<string.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int s[99][3];	//ѧ���ɼ� ��ά���� ѧ����������99 3����Ŀ
	int pj[99];		//ÿ��ѧ����ƽ���ɼ�
	float pj3[99];		//ÿ��ѧ��ƽ���ֵ���ƽ����
	float x=0,y=0,z=0;		//�м�ֵ
	char *zw[5]={""};		//������ʽ�ĵȼ������㣬���á�����Ҫ����ֵ
	//������̬�ַ�������  
	int n;
	printf("������ѧ������");
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
			scanf("%d",&s[i][j]);	//��iλѧ�������Ƴɼ�
			if(s[i][j]>100){
				printf("�Ƿ����룡\n");
				return 0;
			}
		}
	}

	printf(" \n");
	printf("����\t����\t��ѧ\tӢ��\tƽ����\t�ȼ�\n");
	for(int i=0;i<n;i++){
		printf("%s\t",name[i]);				//�����iλѧ������
		for(int i=0;i<n;i++){
		//��ÿһ�Ƶ��ܷ�
		x=x+s[i][0];
		y=y+s[i][1];
		z=z+s[i][2];
	}
		//��ÿһ�Ƶ�ƽ����
		pj3[0]=x/n;
		pj3[1]=y/n;
		pj3[2]=z/n;
		//��ÿ��ƽ���ֵ���ƽ����
		pj3[3]=(pj3[0]+pj3[1]+pj3[2])/3;
		//��һ�����Ƶ�ƽ����
		pj[i]=(s[i][0]+s[i][1]+s[i][2])/3;
			if(pj[i]>=90){
				zw[i] = "����";
			}
			else if(pj[i]>=80){
				zw[i] = "��";
			}
			else if(pj[i]>=70){
				zw[i] = "����";
			}
			else if(pj[i]>=60){
				zw[i] = "����";
			}
			else{
				zw[i] = "������";
			}
			//ѭ�����
		for(int j=0;j<3;j++)
			printf("%d\t",s[i][j]);
			printf("%d\t",pj[i]);
			printf("%s",zw[i]);
			printf("\n");
		
		
	}
	//�ж�ÿ��ƽ���ֵ���ƽ���ֵĵȼ�
	char *pjdj[10]={""};
			if(pj3[3]/n >=90){
				pjdj[1] = "����";
			}
			else if(pj3[3]/n>=80){
				pjdj[1] = "��";
			}
			else if(pj3[3]/n>=70){
				pjdj[1] = "����";
			}
			else if(pj3[3]/n>=60){
				pjdj[1] = "����";
			}
			else{
				pjdj[1] = "������";
			}
	printf("ƽ����\t%.2f\t%.2f\t%.2f\t%.2f\t%s\n",pj3[0]/n,pj3[1]/n,pj3[2]/n,pj3[3]/n,pjdj[1]);
		
	
	return 0;
}
	
	

