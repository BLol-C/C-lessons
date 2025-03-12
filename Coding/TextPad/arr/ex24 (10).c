#include <stdio.h>
#define MAXSIZE 5

int main() {

    int A[MAXSIZE][MAXSIZE];
    int B[MAXSIZE][MAXSIZE];
    int C[MAXSIZE][MAXSIZE]; // SUM of A and B

    int index;
    int i, j;
    int redo; // redo

    float average = 0;
    int count = 0;

    while (1) { // redo

        // index
        while (1) {
            printf("Please input dimension of array (2-5): ");
            scanf("%d", &index);
            if (index >= 2 && index <= 5) {
                break;
            } else {
                printf("Wrong input, must be between 2 and 5!\n");
            }
        }

        // array A value
        count = 0; // reset
        printf("====== array A ======\n");
        for (i = 0; i < index; i++) {
            for (j = 0; j < index; j++) {
                A[i][j] = 0;
                do {
                    printf("Please input %d [%d][%d] of A: ", ++count, i, j);
                    scanf("%d", &A[i][j]);
                    if (A[i][j] <= -1) {
                        printf("The number must be more than -1, try again.\n");
                    }
                } while (A[i][j] <= -1);
            }
        }

        // array B value
        count = 0; // reset
        printf("====== array B ======\n");
        for (i = 0; i < index; i++) {
            for (j = 0; j < index; j++) {
                B[i][j] = 0;
                do {
                    printf("Please input %d [%d][%d] of B: ", ++count, i, j);
                    scanf("%d", &B[i][j]);
                    if (B[i][j] <= -1) {
                        printf("The number must be more than -1, try again.\n");
                    }
                } while (B[i][j] <= -1);
            }
        }

        // C = A * B (SUM)
        count = 0; // reset
        printf("====== The result of new array C ======\n");
        for (i = 0; i < index; i++) {
            for (j = 0; j < index; j++) {
                C[i][j] = A[i][j] * B[i][j];
                printf("%d C[%d][%d] %d * %d = %d\n", ++count, i, j, A[i][j], B[i][j], C[i][j]);
            }
        }

        // average of C
        count = 0; // reset
        average = 0; // reset after redo
        printf("====== The Average value of C ======\n");
        for (i = 0; i < index; i++) {
            for (j = 0; j < index; j++) {
                count++;
                average = average + C[i][j];
            }
        }

        printf("Sum of C is %.2f\n", average);
        printf("Average of C is (%.2f/%d) = %.2f\n", average, count, ((float)average / count));

        // redo?
        printf("========================\n");
        printf("REDO? (1.YES/ 2.NO): ");
        scanf("%d", &redo);

        if (redo == 1) {
            average = 0;
            count = 0;
        } else if (redo == 2) {
            return -1; // exit
        }
    }

    return 0;
}
