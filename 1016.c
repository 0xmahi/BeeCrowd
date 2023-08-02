#include <stdio.h>
#include <math.h>
double square(double num){
    return (num * num);
}

int main() {
    int km , time;
    scanf("%d", &km);

    time = km * 2;
    printf("%d minutos\n" , time);
 
    return 0;
}