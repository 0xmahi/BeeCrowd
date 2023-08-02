#include<stdio.h>

int main(){

    int age , yr, mn ,mn_aux, days;

    scanf("%d" , &age);

    yr = age / 365;
    mn_aux =   age % 365 ;
    mn = mn_aux / 30;
    days = mn_aux % 30; 
    // int days = mn 
    printf("%d ano(s)\n",yr);
    printf("%d mes(es)\n",mn);
    printf("%d dia(s)\n",days);
    return 0;
}