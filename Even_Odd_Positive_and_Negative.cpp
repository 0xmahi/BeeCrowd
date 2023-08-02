#include<bits/stdc++.h>

using namespace std;

int main(){
    int num, sum=0;
    int i,count=0 , odd_count=0, positive_num=0, negative_num = 0;
    for(i=1;i<=5;i++){
        cin >> num;
        if(num % 2 == 0){
          count++;
        }else if(num % 2 != 0){
            odd_count++;
        } if ( num > 0){
            positive_num++;
        }if (num < 0 ){
            negative_num++;
        }
    }   
 cout << count << " " << "valor(es) par(es)" << endl;
 cout << odd_count << " " << "valor(es) impar(es)" << endl;
 cout << positive_num << " " << "valor(es) positivo(s)" << endl;
 cout << negative_num << " " << "valor(es) negativo(s)" << endl; 
}


