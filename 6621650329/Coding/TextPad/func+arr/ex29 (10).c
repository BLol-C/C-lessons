#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXSIZE 5

void sort_descending(int arr[],int n); // >
void sort_ascending(int arr[],int n); // <

void main(){

	int random = 1200; // random

	int arr[MAXSIZE][MAXSIZE][MAXSIZE]; // arr3D
	int range; // input

	int i,j,k; // for

	int count = 0; // row

	int arr1D[MAXSIZE * MAXSIZE * MAXSIZE]; //  arr1D[how many array3D]
	int index = 0; // arr1d[index]

	int choice; // select func

	srand(time(0)); // reset random

	// insert range
	do{
	printf("Please input dimension of array 3D (1-5) : ");
	scanf("%d",&range);
	if(range < 1 || range > 5) printf("invalid input!\n");
	}while(range < 1 || range > 5);

	printf("====Random number [0 - 1200]====\n");
	printf("==============================\n");

	// intput value in array3D (random)
	for(i = 0; i< range; i++){
		for(j = 0; j< range; j++){
			for(k = 0; k< range; k++){
				arr[i][j][k] = 0;
				arr[i][j][k] = rand() % (random + 1);
				arr1D[index] = arr[i][j][k]; // input value for func
				printf("%d [%d][%d][%d] = %d\n",++count,i,j,k,arr[i][j][k]);
				index++; // arr1D[index]
			}
		}
	}

	printf("==============================\n");


	// choice to sort
	do{
		printf("Please select which one you want! \n -type 1 to sort descending '>' \n -type 2 to sort ascending '<'\n -type 3 to default sort '='\n");
		printf("Answer : ");
		scanf("%d",&choice);

		if(choice == 1){
		sort_descending(arr1D, range * range * range);
		printf("===== after descending =====\n");
		} else if(choice == 2){
		sort_ascending(arr1D, range * range * range);
		printf("===== after ascending =====\n");
		} else if(choice == 3){
		printf("===== default sort =====\n");
		} else if(choice < 1 || choice >3) printf("Invalid choice please choose between (1-3)!\n"); // error
	} while(choice < 1 || choice >3);


	index = 0; // reset
	count = 0; // reset


	// Output screen
	for(i = 0; i< range; i++){
		for(j = 0; j< range; j++){
			for(k = 0; k< range; k++){
				arr[i][j][k] = 0;
				arr[i][j][k] = arr1D[index++];
				printf("%d [%d][%d][%d] = %d\n",++count,i,j,k,arr[i][j][k]);
			}
		}
	}

	printf("==============================\n");
}

//Buuble sort
void sort_descending(int arr[],int n){

	int i,j;
	int temp;

	for(i = 0; i< n-1;i++){ // 0 - n-1 in array
		for(j = i + 1 ; j < n ; j++){
			if(arr[i] < arr[j]){ // <
				// swap
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

//Buuble sort
void sort_ascending(int arr[],int n){

	int i,j;
	int temp;

	for(i = 0; i< n-1;i++){ // 0 - n-1 in array
		for(j = i + 1 ; j < n ; j++){
			if(arr[i] > arr[j]){ // >
				// swap
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}