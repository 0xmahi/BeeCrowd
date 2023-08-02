#include <stdio.h>
#include <math.h>
double square(double num){
    return (num * num);
}

int main() {
    float km , time , distance;
    scanf("%f %f", &km, &time);
    
    distance = km * time;
    float fuelSpent = distance / 12;
    printf("%.3f\n", fuelSpent);
 
    return 0;
}