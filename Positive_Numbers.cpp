#include<bits/stdc++.h>
using namespace std;

int main(){
    float a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    double arr[6] = {a ,b,c,d,e,f};
    int positiveCount = 0;


    for(int i = 0; i < 6 ; i++){
        if (arr[i] > 0){
            positiveCount++;
        }
        
    }
    cout << positiveCount << " " << "valores positivos" << endl;
return 0;
    
}
