//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//
//
////�����۰���ҷ�������������������������,�ҵ��˷����±�
//int main(){
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 45 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//	printf("��������ҵ�����:\n");
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
//			printf("�ҵ��˸�����:%d �����±���%d\n", i, mid);
//			break;
//		}
//		else if(i!=mid){
//			printf("�������в����ڸ�����\n");
//			break;
//		}
//		
//	}
//
//
//	system("pause");
//	return 0;
//}