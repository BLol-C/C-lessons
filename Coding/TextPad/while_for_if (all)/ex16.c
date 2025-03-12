#include <stdio.h>

int main() {

    int start, end;
    int i, num;
    int isPrime;
    int checkinput;

    do {
        printf("Please enter start : ");
        scanf("%d", &start);

        printf("Please enter end : ");
        scanf("%d", &end);

    } while (start > end);

    printf("\n=========================================\n");
    printf("These are prime numbers :\n");



    for (num = start; num <= end; num++) {
        if (num <= 1) {
            continue;
        }

        isPrime = 1;

        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num);
        }
    }
	printf("\n");
    return 0;
}
