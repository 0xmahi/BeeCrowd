#include <stdio.h>
#include <math.h>
double square(double num){
    return (num * num);
}

int main() {
 
    float x1,x2,y1,y2,x,y,dis,result;
    
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);

    x = square(x2 - x1); 
    y = square(y2 - y1);

    dis = sqrt(x + y);
    printf("%.4f", dis);
 
    return 0;
}
