//实现猜数字游戏
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void game(){
	int i = rand() % 100 + 1;
	int in_put = 0;
	while (1){
		
		printf("请输入您猜测的数字:");
		scanf("%d", &in_put);

		 if (in_put > i){
			printf("猜大了,请继续\n");
		}

		else if (in_put < i){
			printf("猜小了,请继续\n");
		}
		else {
			printf("猜对了\n");
			break;
		}
	}
}

//猜数字游戏
int main(){
	while (1){	
		int a = 0;	
		printf("请输入选项:1(开始游戏) or 任意键退出游戏\n");
		scanf("%d", &a);
		if (a == 1){
			game();

		}
		else{
			printf("退出游戏!\n");
			break;

		}
	}
	system("pause");
	return 0;
}