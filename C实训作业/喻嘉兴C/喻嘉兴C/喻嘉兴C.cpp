// ����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <malloc.h>
#include<string.h>

struct students{
	int s[99][3];	//ѧ���ɼ� ��ά���� ѧ����������99 3����Ŀ
	int pj[99];		//ÿ��ѧ����ƽ���ɼ�
	float pj3[99];		//ÿ��ѧ��ƽ���ֵ���ƽ����
	float x,y,z;		//�м�ֵ
	char *zw[5];
	char *pjdj[10];
}yjx1;

int _tmain(int argc, _TCHAR* argv[])
{
		//������ʽ�ĵȼ������㣬���á�����Ҫ����ֵ
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
		switch (yjx1.pj[i]/10){
		case 10:
		case 9:yjx1.zw[i] = "����";break;
		case 8:yjx1.zw[i] = "��";break;
		case 7:yjx1.zw[i] = "����";break;
		case 6:yjx1.zw[i] = "����";break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:yjx1.zw[i] = "������";
		default:
		break;
		}
	
			//ѭ�����
		for(int j=0;j<3;j++)
			printf("%d\t",yjx1.s[i][j]);
			printf("%d\t",yjx1.pj[i]);
			printf("%s",yjx1.zw[i]);
			printf("\n");
		
		
	}
	//�ж�ÿ��ƽ���ֵ���ƽ���ֵĵȼ�
	int fs=yjx1.pj3[3]/n/10;
	switch (fs){
		case 10:
		case 9:yjx1.pjdj[1] = "����";
		case 8:yjx1.pjdj[1] = "��";break;
		case 7:yjx1.pjdj[1] = "����";break;
		case 6:yjx1.pjdj[1] = "����";break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:yjx1.pjdj[1] = "������";
		default:
		break;
		}
	
	printf("ƽ����\t%.2f\t%.2f\t%.2f\t%.2f\t%s\n",yjx1.pj3[0]/n,yjx1.pj3[1]/n,yjx1.pj3[2]/n,yjx1.pj3[3]/n,yjx1.pjdj[1]);
		
	
	return 0;
}
	
	

