#include <stdio.h>
int main() {

    double prices[] = {5.0, 10.0, 15.0, 20.0, 12.25, 17.85};

    //    printf("size of prices array %d bytes\n", sizeof(prices));

    for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); ++i) {
        printf("%.2lf\n", prices[i]);
    }

    return 0;
}