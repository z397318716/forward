#include<stdio.h>
//求小于999的水仙花数
//水仙花数”是指一个三位数其各位数字的立方和等于该数本身，例如153是“水仙花数”，因为：153 = 13 + 53 + 33。

int Shuixian(int n){
	if (n<100 || n>999){
		return 0;
	}
	int tmp = num;
	int n1 = n % 10;//个位
	n /= 10;
	int n2 = n % 10;//十位
	n /= 10;
	int n3 = n % 10;//百位
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