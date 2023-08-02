#include<bits/stdc++.h>

using namespace std;

int main(){
    int i=0, num;
    cin >> num;
    while(i < 6){
        if( num % 2 != 0){
            cout << num << endl;
            i++;
        }
        num ++;
    }
}
