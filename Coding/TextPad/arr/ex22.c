#include <stdio.h>
#define MAXSIZE 10


int main(){
	int A[MAXSIZE][MAXSIZE];
	int B[MAXSIZE][MAXSIZE][MAXSIZE];


	int i = 0, j = 0, k = 0;
	int n = 0, m = 0;

	do{
	printf("Enter maxsize of arr2D = ");
	scanf("%d",&n);
	}while(n>50);

	for(i = 0; i<n; i++){
		for(j = 0; j<n; j++){
			A[i][j] = 0;
			printf("enter A[%d][%d] = ",i,j);
			scanf("%d",&A[i][j]);
		}
	}

	printf("\nResult \n");
	for(i = 0; i<n; i++){
		for(j = 0; j<n; j++){
			printf("A[%d][%d] = %d \n",i,j,A[i][j]);
			}
	}

	do{
	printf("Enter maxsize of arr3D = ");
	scanf("%d",&m);
	}while(m>50);

	for(i = 0; i<m; i++){
		for(j = 0; j<m; j++){
			for(k = 0; k<m; k++){
				B[i][j][k] = 0;
				printf("enter B[%d][%d][%d] = ",i,j,k);
				scanf("%d",&B[i][j][k]);
			}
		}
	}

	for(i = 0; i < m; i++) {
	    for(j = 0; j < m; j++) {
	        for(k = 0; k < m; k++) {
	            printf("B[%d][%d][%d] = %d \n", i, j, k, B[i][j][k]);
	    	}
	    }
    }



	return 0;
}