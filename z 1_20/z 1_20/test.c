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
////��һ������������(������߽���)������
//
////�����һ�����鵱����������,��ô����������ʽ�˻���ָ��
////���ָ���ָ�����������Ԫ��
//void Bubblesort(int arr[],int size){
//	//��ǰ���ð����������Ҫ֪�������е�Ԫ�ظ���
//	//����ͨ�� sizeof �ķ�ʽ��ȡ����
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	int bound = 0;
//	//[0,bound) �Ѿ��ź��������
//	//[bound,size) ����������
//	//���ɸѡ��һ����С��Ԫ�طŵ���ʼλ����,�Ϳ��� ��bound++
//
//	for (; bound < size; ++bound){
//		//��һ��ѭ����Ҫѭ�����ɴ�,ÿ��ѭ��ɸѡ����ǰ��������������С��Ԫ��
//		int cur = size - 1;
//		for (; cur > bound; --cur){
//			//���ѭ���ڱ�������������
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