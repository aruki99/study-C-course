// ������G.cpp : �������̨Ӧ�ó������ڵ㡣
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
	scanf("%d",&x);	//ѡ�Ź���
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
		printf("лл���ټ���\n");
		return 0;
		break;
	}
	system("cls");	//�����Ļ
	}
}



void meun(){
printf("--------------------\n\n");
	printf("��ͥ��֧�Ǽǳ���\n");
	printf("   ����:������\n");
	printf("\n");
	printf("1������Ǽ�\n");
	printf("2��֧���Ǽ�\n");
	printf("3������ѯ\n");
	printf("4����������\n");
	printf("����������ţ�1-4��:");
}


int ruku(int shouru){
	printf("--����Ǽ�--\n");
		printf("ԭʼ���%d\n",qian);
		printf("�������룺");
		scanf("%d",&shouru);
		if(shouru<0){
			printf("�Ǽ�ʧ��!\n");
			return 0;
		}
		qian=qian+shouru;
		printf("�������%d\n",qian);
		system("pause");	//�����������
		return qian;

}

int chuku(int zhichu){
	printf("--֧���Ǽ�--\n");
		printf("ԭʼ���%d\n",qian);
		printf("����֧����");
		scanf("%d",&zhichu);
		if(zhichu<0){
			printf("�Ǽ�ʧ��!\n");
			return 0;
		}
		qian=qian-zhichu;
		printf("�������%d\n",qian);
		system("pause");
		return qian;
}

int chaxun(int x){
	printf("�������%d\n",qian);
	system("pause");
	return qian;
}

