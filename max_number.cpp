#include <bits/stdc++.h>
using namespace std;
 int main(){
    int N ;
    cin >> N;
    int maxNumber = -1;


    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        if(x>maxNumber) maxNumber = x;
    
    }
        cout << maxNumber  << endl;
    return 0;

 }