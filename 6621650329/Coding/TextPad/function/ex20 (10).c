#include <stdio.h>

#define NUMBER 250 // Global

void sum(int a, float b);
void sum1();

int number = 200; // Global
int number1 = 300;

int main(){

	int A = 50; // Local
	float B = 100; // Local

	printf("=====MAIN=====\n");
	printf("%d\n",A); // L
	printf("%d\n",NUMBER); // G
	printf("%d\n",number+NUMBER); // G + L
	sum(A,B); // send a parameter
	sum1(); // send a parameter

	return 0;
}


void sum(int a, float b){
	// a = 50;
	//float b = 100;
	int A = 50; // L
	float D  = 50; // L
	// a = 50;

	printf("\n%d\n",number1);
	printf("=====SUM=====\n");
	printf("%d\n",A); // L
	printf("%f\n",D); // L

	printf("=====SUM parameter=====\n");
	printf("%d\n",a); // L main (A)

}

void sum1(){
	printf("=====SUM1=====\n");
	printf("%d\n",number);
	printf("%d\n",NUMBER);
}


