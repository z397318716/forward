
#include <stdio.h>
#include <stdlib.h>





int main(){
	int arr[3][4] = { 0 };
	for (int row = 0; row < 3; ++row){
		for (int col = 0; col < 4; ++col){
			printf("arr[%d][%d] => %p", &arr[row][col]);
		}
		printf("\n");
	}



	system("pause");
	return 0;
}