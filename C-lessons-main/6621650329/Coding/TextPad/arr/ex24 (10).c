#include <stdio.h>
#define MAXSIZE 5

int main(){

	int A[MAXSIZE][MAXSIZE];
	int B[MAXSIZE][MAXSIZE];
	int C[MAXSIZE][MAXSIZE];

	int index;
	int i,j;

	int average = 0;
	int count = 0;

	do{
		printf("Please input scope of array [column][row] limit (1-5) : ");
		scanf("%d",&index);
		if(index <= 0 || index > 5) printf("Wrong input must be (1-5)\n");
	}while(index <= 0 || index > 5);

	printf("======array A======\n");
	for(i = 0; i < index; i++){
		for(j = 0; j < index; j++){
			A[i][j] = 0;
			do{
				printf("Please input [%d][%d] of A : ",i,j);
				scanf("%d",&A[i][j]);
				if(A[i][j] <= -1) printf("The number must more than -1 try again.\n");
			}while(A[i][j] <= -1);
		}
	}
	printf("======array B======\n");
	for(i = 0; i < index; i++){
		for(j = 0; j < index; j++){
			B[i][j] = 0;
			do{
				printf("Please input [%d][%d] of B : ",i,j);
				scanf("%d",&B[i][j]);
				if(B[i][j] <= -1) printf("The number must more than -1 try again.\n");
			}while(B[i][j] <= -1);
		}
	}

	printf("======The result of new array C======\n");
	for (i = 0; i < index; i++) {
	    for (j = 0; j < index; j++) {
	         C[i][j] = A[i][j] * B[i][j];
	         printf("C[%d][%d] = ( A[%d][%d] * B[%d][%d] ): %d * %d = %d\n",i, j, i, j, i, j, A[i][j], B[i][j], C[i][j]);
	    }
	}

	printf("======The Average value of C======\n");
	for(i = 0; i < index; i++){
		for (j = 0; j < index; j++) {
			count++;
			average = average + C[i][j];
		}
	}
	printf("sum of C is %d\n",average);
	printf("average of C is (%d/%d) = %.2f\n",average,count,((float)average / count));


 return 0;
 }