#include<stdio.h>
//��С��999��ˮ�ɻ���
//ˮ�ɻ�������ָһ����λ�����λ���ֵ������͵��ڸ�����������153�ǡ�ˮ�ɻ���������Ϊ��153 = 13 + 53 + 33��

int Shuixian(int n){
	if (n<100 || n>999){
		return 0;
	}
	int tmp = num;
	int n1 = n % 10;//��λ
	n /= 10;
	int n2 = n % 10;//ʮλ
	n /= 10;
	int n3 = n % 10;//��λ
	if (pow(n1, 3) + pow(n2, 3) + pow(n3, 3) == tmp){
		return 1;
	}
	return 0;
}

int main(){
	int i = 100;
	for (; i <= 999; i++){
		if (Shuixian(i)){
			printf("%d\n", i);
		}

	}

	system("pause");
	return 0;
}