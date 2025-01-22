#include <stdio.h>
#include <conio.h>
int main()
{
    int radius, area;
    float PI = 3.142;
    area = 0;
    printf("Enter radius of circle : ");
    scanf("%d", &radius);
    area = PI * radius * radius;
    printf("The area of circle is : %f \n", area);
    getch();
}
