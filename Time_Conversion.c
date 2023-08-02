#include <stdio.h>


 int main(){
    int time;
    scanf("%d", &time);
    int hr = time / 3600;
    int min_mod = time % 3600;
    int min = min_mod / 60;
    int sec = time % 60;
    printf("%d:%d:%d\n", hr, min, sec);
    return 0;
 }