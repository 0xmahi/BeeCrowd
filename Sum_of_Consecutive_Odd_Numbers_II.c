#include <stdio.h>
#include <math.h>
double square(double num){
    return (num * num);
}
 
int main(){
 
    int n,sum, x,y,i,j,temp;
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf("%d%d", &x,&y);
        if (x > y){
            temp = x;
            x = y;
            y = temp;
        }
        if(x%2==0){
            x++;
        }else{
            x+=2;
        }
        for (j=x; j < y; j+=2){
            sum +=j;
        }
        printf("%d\n",sum);
        sum = 0;
    } 

 
    return 0;
}