////��� n ��쳲���������
////���й���:ÿһ����ǰ����֮��  ��:1 1 2 3 5 8 13 21 34 ....
//#include <stdio.h>
//#include <stdlib.h>
//
////int g_count = 0;
//int Factor(int n){
//	if (n == 1 || n == 2){
//		return 1;
//	}
//	//��ʾ n-2 �� �� n-1 �������
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
//	////�ݹ�ķ�ʽʵ��:
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
////���һ������,�����ȿ���ʹ�õݹ�ķ�ʽ,Ҳ����ʹ�÷ǵݹ�(ѭ��)�ķ�ʽ
////�ݹ�ķ�ʽ����ͨ����ֱ�۸���,��������Ч�ʿ��ܻ�ϵ�
////�ǵݹ鷽ʽ����ͨ��������,��������Ч�ʿ��ܻ�ϸ�
//
//int main(){
//
//	//printf("%d\n", Factor(40));
//	//printf("%d\n", g_count);
//	printf("%d\n", Factor(40));
//	system("pause");
//	return 0;
//}