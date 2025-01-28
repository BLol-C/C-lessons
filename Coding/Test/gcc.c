#include <stdio.h>

int main() {

    double tile_price = 1000;
    double wage_per_tile = 500;

    double outer_length, outer_width, inner_length, inner_width;

    printf("how long");
    while(scanf("%f",&outer_length) != 1 || outer_length <= 0){
        printf("ใส่ค่าให่");
        while(getchar() != '\n');
    }

    return 0;
}