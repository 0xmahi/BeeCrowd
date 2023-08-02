#include <stdio.h>
#include <math.h>
double square(double num){
    return (num * num);
}
 
int main(){
 
    float a , b, c;
    scanf("%f %f %f", &a, &b,&c);

    if ( a + b > c && a + c > b && b + c > a ){
        float sum = a +b +c;
        printf("Perimetro = %.1f\n", sum);
    }else{
        float area =  (a + b) * c / 2;
        printf("Area = %.1f\n", area);  
    }
 
    return 0;
}