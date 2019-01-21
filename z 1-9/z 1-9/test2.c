////求第 n 项斐波那锲数列
////数列规律:每一项是前两项之和  例:1 1 2 3 5 8 13 21 34 ....
//#include <stdio.h>
//#include <stdlib.h>
//
////int g_count = 0;
//int Factor(int n){
//	if (n == 1 || n == 2){
//		return 1;
//	}
//	//表示 n-2 项 和 n-1 项的内容
//	int n1 = 1;
//	int n2 = 1;
//	int result = 0;
//	for (int i = 3; i <= n; ++i){
//		result = n1 + n2;
//		n1 = n2;
//		n2 = result;
//	}
//	return result;
//
//	////递归的方式实现:
//	//if (n == 1|| n == 2){
//	//	return 1;
//	//}
//	//if (n == 3){
//	//	g_count++;
//	//}
//	//return Factor(n - 1) + Factor(n - 2);
//	
//}
//
////解决一个问题,往往既可以使用递归的方式,也可以使用非递归(循环)的方式
////递归的方式代码通常更直观更简单,但是运行效率可能会较低
////非递归方式代码通常更繁琐,但是运行效率可能会较高
//
//int main(){
//
//	//printf("%d\n", Factor(40));
//	//printf("%d\n", g_count);
//	printf("%d\n", Factor(40));
//	system("pause");
//	return 0;
//}