// 喻嘉兴D.cpp : 定义控制台应用程序的入口点。
//4、	输入一个字符串，统计并显示字符串中所含字母、小写字母、大写字母、数字及空格的个数。输出格式不论，简单明了就好

#include "stdafx.h"
int _tmain(int argc, _TCHAR* argv[])
{
	char c;
	int letters = 0,space = 0,digit = 0,daxie=0,xiaoxie=0;
	printf("请输入一行字符 : \n");
	while((c = getchar()) != '\n'){		//getchar()函数的作用是从计算机终端（一般为键盘）
										//获取一个无符号字符。getchar()函数只能接收一个字符，其函数值就是从输入设备获取到的字符。
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
		printf("字母数 : %d\n空格数 : %d\n数字数 : %d\n大写字母 : %d\n小写字母 : %d\n",
			letters,space,digit,daxie,xiaoxie);
		return 0;
}

