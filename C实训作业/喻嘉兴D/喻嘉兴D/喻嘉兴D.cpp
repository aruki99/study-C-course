// ������D.cpp : �������̨Ӧ�ó������ڵ㡣
//4��	����һ���ַ�����ͳ�Ʋ���ʾ�ַ�����������ĸ��Сд��ĸ����д��ĸ�����ּ��ո�ĸ����������ʽ���ۣ������˾ͺ�

#include "stdafx.h"
int _tmain(int argc, _TCHAR* argv[])
{
	char c;
	int letters = 0,space = 0,digit = 0,daxie=0,xiaoxie=0;
	printf("������һ���ַ� : \n");
	while((c = getchar()) != '\n'){		//getchar()�����������ǴӼ�����նˣ�һ��Ϊ���̣�
										//��ȡһ���޷����ַ���getchar()����ֻ�ܽ���һ���ַ����亯��ֵ���Ǵ������豸��ȡ�����ַ���
		if(c >= 'a' && c <= 'z'){
			xiaoxie++;
		}else if(c >= 'A' && c <= 'Z'){
			daxie++;
		}else if(c >= '0' && c <= '9'){
			digit++;
		}else if(c == ' '){
			space++;
		}
		letters=daxie+xiaoxie;
	}
		printf("��ĸ�� : %d\n�ո��� : %d\n������ : %d\n��д��ĸ : %d\nСд��ĸ : %d\n",
			letters,space,digit,daxie,xiaoxie);
		return 0;
}

