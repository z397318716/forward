//
//#include <stdio.h>
//#include<stdlib.h>
//
//
//void Swap(int* x, int* y){
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//
//
////把一个数组变成有序(升序或者降序)的数组
//
////如果把一个数组当做函数参数,那么这个数组会隐式退化成指针
////这个指针就指向了数组的首元素
//void Bubblesort(int arr[],int size){
//	//当前这个冒泡排序函数需要知道数组中的元素个数
//	//但是通过 sizeof 的方式获取不到
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	int bound = 0;
//	//[0,bound) 已经排好序的区间
//	//[bound,size) 待排序区间
//	//如果筛选出一个最小的元素放到起始位置了,就可以 让bound++
//
//	for (; bound < size; ++bound){
//		//第一重循环需要循环若干次,每次循环筛选出当前待排序区间中最小的元素
//		int cur = size - 1;
//		for (; cur > bound; --cur){
//			//这个循环在遍历待排序区间
//			if (arr[cur] < arr[cur - 1]){
//				Swap(&arr[cur], &arr[cur - 1]);
//			}
//		}
//	}
//}
//
//int main(){
//	int arr[] = { 9, 5, 2, 7 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	Bubblesort(arr,len);
//	for (int i = 0; i < len; ++i){
//		printf("%d ", arr[i]);
//	}
//
//	system("pause");
//	return 0;
//}