// ������H.cpp : �������̨Ӧ�ó������ڵ㡣
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
	if((fp=fopen("yjx.wlb", "rb"))==NULL){		//��һ�����г����ʱ��
		printf("Ϊ�㽨�����ļ�\n");
		fp=fopen("yjx.wlb", "wb");
		way();
		//fprintf(fp,"%d",qian);
		fwrite(&qian,sizeof(int),1,fp);
		fclose(fp);
	}else{										//�ٴ����г�����߼�
		printf("Ϊ����Ѵ����ļ�\n");
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








//����
int way(){
	for(;;){
	printf("--------------------\n\n");
	printf("��ͥ��֧�Ǽǳ���\n");
	printf("   ����:������\n");
	printf("\n");
	printf("1������Ǽ�\n");
	printf("2��֧���Ǽ�\n");
	printf("3������ѯ\n");
	printf("4����������\n");
	printf("����������ţ�1-4��:");
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
		printf("лл���ټ���\n");
		return 0;
		break;
	
	}
	system("cls");
	}
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
		return qian;
}

int chaxun(int qian){
	printf("�������%d\n",qian);
	return qian;
}

