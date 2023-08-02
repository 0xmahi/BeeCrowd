#include<bits/stdc++.h>

using namespace std;

int main(){
    int num, sum=0;
    int i,count=0;
    for(i=1;i<=5;i++){
        cin >> num;
        if(num % 2 == 0){
          count++;
        }
    }   
 cout << count << " " << "valores pares" << endl;
}

