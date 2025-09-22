#include <bits/stdc++.h>
using namespace std;
int main(){
    int value; 
    int min;
    int max;
    for ( int i = 0; i < 3; i++ ){
        cin >> value;
        if(i==0){
            min = value;
            max = value;
        }else{
             if(value < min) min = value;
        if(value > max) max = value;

        }
    }
    cout << min << " " << max;
}