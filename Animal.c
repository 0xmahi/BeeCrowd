#include <stdio.h>
#include <string.h>
 
int main(){
    char nameA[15], nameB[15], nameC[15];

    scanf("%s", nameA);
    scanf("%s", nameB);
    scanf("%s", nameC);

    if(nameA[0] == 'v' && nameB[0] == 'a' && nameC[0] == 'c') printf("aguia\n");

    if(nameA[0] == 'v' && nameB[0] == 'a' && nameC[0] == 'o') printf("pomba\n");

    if(nameA[0] == 'v' && nameB[0] == 'm' && nameC[0] == 'o') printf("homem\n");

    if(nameA[0] == 'v' && nameB[0] == 'm' && nameC[0] == 'h') printf("vaca\n");

    if(nameA[0] == 'i' && nameB[0] == 'i' && nameC[2] == 'm') printf("pulga\n");

    if(nameA[0] == 'i' && nameB[0] == 'i' && nameC[2] == 'r') printf("lagarta\n");

    if(nameA[0] == 'i' && nameB[0] == 'a' && nameC[0] == 'h') printf("sanguessuga\n");
    
    if(nameA[0] == 'i' && nameB[0] == 'a' && nameC[0] == 'o') printf("minhoca\n");
    return 0;

}