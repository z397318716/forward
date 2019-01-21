//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//
//
////基于折半查找方法在整形有序数组中找数字,找到了返回下标
//int main(){
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 45 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//	printf("请输入查找的数字:\n");
//	scanf("%d", &i);
//	while (left <= right){
//		mid = (left + right) / 2;
//		if (i < arr[mid]){
//			right = mid - 1;
//		}
//		else if (i>arr[mid]){
//			left = mid + 1;
//		}
//		else if (i == arr[mid]){
//			printf("找到了该数字:%d 它的下标是%d\n", i, mid);
//			break;
//		}
//		else if(i!=mid){
//			printf("该数组中不存在该数字\n");
//			break;
//		}
//		
//	}
//
//
//	system("pause");
//	return 0;
//}