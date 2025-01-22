#include <stdio.h>
void main()
{
	int check;
	int sum;
	int a,b;
	int check_sum;
	do
	{

		do{
		printf("Please enter check: ");
		check_sum = scanf("%d",&check);
		while(getchar() != '\n');
		}while((check_sum != 1) || (check <= -0));

		printf("Please enter number 1: ");
		scanf("%d",&a);

		printf("Please enter number 2: ");
		scanf("%d",&b);

		sum = a+b;

		printf("result: %d\n",sum);
	}while(sum != check);

}