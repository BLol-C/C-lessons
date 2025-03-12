//Ex 33
#include <stdio.h>
#define MAX 10

int main() {

	int arr1D[MAX];
	int *a,*b;
	int range;
	int i;

	//-----input-----
	while(1){
		printf("Please input arr1D [A and B] range (2-5) : ");
		scanf("%d",&range);

		if(range < 2 || range > 10){
			printf("invalid try again\n");
		} else break;
	}

	a = &arr1D[0];
	printf("=====A=====\n");
	for(i = 0; i < range ; i++){
		printf("[%d] = ",i);
		scanf("%d",(a+i));
	}

	b = &arr1D[0];
	printf("=====B=====\n");
	for(i = 0; i < range ; i++){
		printf("[%d] = ",i);
		scanf("%d",(b+i));
	}

	printf("A = { ");
	for(i = 0 ; i < range ; i++){
		printf("%d ",*(a+i));
	}


    return 0;
}

