//ʵ�ֲ�������Ϸ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void game(){
	int i = rand() % 100 + 1;
	int in_put = 0;
	while (1){
		
		printf("���������²������:");
		scanf("%d", &in_put);

		 if (in_put > i){
			printf("�´���,�����\n");
		}

		else if (in_put < i){
			printf("��С��,�����\n");
		}
		else {
			printf("�¶���\n");
			break;
		}
	}
}

//��������Ϸ
int main(){
	while (1){	
		int a = 0;	
		printf("������ѡ��:1(��ʼ��Ϸ) or ������˳���Ϸ\n");
		scanf("%d", &a);
		if (a == 1){
			game();

		}
		else{
			printf("�˳���Ϸ!\n");
			break;

		}
	}
	system("pause");
	return 0;
}