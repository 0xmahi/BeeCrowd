#include <stdio.h>
 
int main() {
 
    int dis;
    float fuel;
    scanf("%d %f", &dis, &fuel);

    float calc = dis / fuel;

    printf("%.3f km/l\n", calc);
    return 0;
}