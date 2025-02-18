#include <stdio.h>
#define MAXSIZE 10

int main(){
    int a[MAXSIZE];
    int b[MAXSIZE];
    int c[MAXSIZE];

    int i = 0;
    int index_a, index_b;
    int average;
    int sum;

    printf("============== Array [a] ==============\n ");
    for(i = 0; i<MAXSIZE; i++){
        a[i] = 0;
        printf("Enter values of [%d] :",i);
        scanf("%d",&a[i]);
    }

    for(i = 0; i<MAXSIZE;i++){
        if(i%5 == 0) printf("\n");
        printf("a[%d] = %d ",i,a[i]);
    }

    printf("\n\n============== Array [b] ==============\n");
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
        if(i == 0) printf("\n\n\t============== The Result of array A + B ============== ");
        if(i%5 == 0) printf("\n");
        printf("c[%d] = %d\t",i,c[i]);
    }

	// find average

	do{
		printf("\n\nPlease select index of array a (0 - %d): ", MAXSIZE - 1);
    	scanf("%d", &index_a);

    	if (index_a >= 0 && index_a < MAXSIZE) {
        	printf("The value at index %d in array a is: %d\n", index_a, a[index_a]);
        break;
    	} else {
        	printf("invalid index select between 0 - %d.\n", MAXSIZE - 1);
    	}
	}while(1);

	do{
		printf("\nPlease select index of array b (0 - %d): ", MAXSIZE - 1);
	    scanf("%d", &index_b);

	    if (index_b >= 0 && index_b < MAXSIZE) {
	        	printf("The value at index %d in array b is: %d\n", index_b, b[index_b]);
	    break;
	   	} else {
	        printf("invalid index select between 0 - %d.\n", MAXSIZE - 1);
	    	}
	}while(1);

	sum = a[index_a] * b[index_b];
	printf("\nThe multiple of index a (%d) and index b (%d) are : %d ",index_a,index_b,sum);

	average = (float)sum/2;
	printf("\nAverage of these array are : %d\n",average);


    return 0;
}