//Ex 32
#include <stdio.h>
#define MAX 3

int main() {

	int arr1D[MAX] = {1,2,3};

	int arr2D[MAX][MAX] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	int arr3D[MAX][MAX][MAX] = {
		{
			{1,2,3},
			{4,5,6},
			{7,8,9}
		},
		{
			{10,11,12},
			{13,14,15},
			{16,17,18}
		},
		{
			{19,20,21},
			{22,23,24},
			{25,26,27}
		}

	};


	int i,j,k;

	int *p;

	printf("================== arr1D ==================\n");
	p = &arr1D[0];
	for(i = 0; i < MAX; i++){
		printf("value  = %d\t", *(p + i));
		printf("address: %u\n",(p + i));
	}

	printf("================== arr2D ==================\n");
	p = &arr2D[0][0];
	for(i = 0; i < MAX*MAX ; i++){
		printf("value  = %d\t", *(p + i));
		printf("address: %u\n",(p + i));
	}

	printf("================== arr3D ==================\n");
	p = &arr3D[0][0][0];
	for(i = 0; i < MAX*MAX*MAX; i++){
		printf("value  = %d\t", *(p + i));
		printf("address: %u\n",(p + i));
	}

    return 0;
}

