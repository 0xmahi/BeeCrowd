#include <stdio.h>
int main()
{
    int start_hr , start_min , end_hr, end_min;
    int dif;
    scanf("%d %d %d %d", &start_hr, &start_min, &end_hr, &end_min);
    dif = ((end_hr*60)+end_min) - ((start_hr*60)+start_min);
    
    if(dif <= 0) {
        dif += 24*60;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dif/60, dif%60);
    return 0;
}