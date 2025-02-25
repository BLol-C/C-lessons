#include <stdio.h>
#define MAXSIZE 10

int main(){
	int a[MAXSIZE];
	int b[MAXSIZE];
	int c[MAXSIZE];

	int i = 0;


	printf("Array [a]\n");
	for(i = 0; i<MAXSIZE; i++){
		a[i] = 0;
		printf("Enter values of [%d] :",i);
		scanf("%d",&a[i]);
	}

	for(i = 0; i<MAXSIZE;i++){
		if(i%5 == 0) printf("\n");
		printf("a[%d] = %d ",i,a[i]);
	}
	printf("\n\nArray [b]\n");
	for(i = 0; i<MAXSIZE; i++){
		b[i] = 0;
		printf("Enter values of [%d] :",i);
		scanf("%d",&b[i]);
	}

	for(i = 0; i<MAXSIZE;i++){
		if(i%5 == 0) printf("\n");
		printf("b[%d] = %d ",i,b[i]);
	}

	for(i = 0; i<MAXSIZE;i++){
		c[i] = a[i]+b[i];
		if(i == 0) printf("\n\n\tThe Result of array A + B ");
		if(i%5 == 0) printf("\n");
		printf("c[%d] = %d\t",i,c[i]);

	}

	return 0;
}
