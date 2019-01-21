////求 n 的阶乘
//#include<stdio.h>
//#include <stdlib.h>
//
//int Factor(int n){
//	/*int result = 1;
//	int i;
//	for (i = 1; i <= n; ++i){
//	result *= i;
//	}
//	return result;*/
//
//
//
//	//用递归的方法解决:
//	//1.先看 n 是不是 1, 如果 n 是 1 直接返回1
//	//2.如果 n 不是 1,计算 n * Factor(n-1)
//	if (n == 1){
//		return 1;
//	}
//	return n*Factor(n - 1);
//}
//
//
//int main(){
//
//	printf("%d\n", Factor(5));
//
//	system("pause");
//	return 0;
//}