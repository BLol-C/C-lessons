#include <stdio.h>

main()
{
	int a = 2;
	int b = 7;
	int x = 5;

	int temp;

	temp = x+a;

	b  ^=  temp--;
    printf("b = %d\n", b);
}
