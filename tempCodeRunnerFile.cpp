#include<bits/stdc++.h>
using namespace std;


void reverseArr( int* N, int n){
    int start = 0;
    int end = n-1;

      for(int a = 0; start < n; a++){
        cout << N[a] << " ";
    }
    
    while(start < end){
        swap(N[start], N[end]);
        start++;
        end--;
    }
  
}



int main(){
 
    int A;
    cin >> A ;
     int *N = new int [A];

    for (int a =0; a<A; a++){
        cin >> N[a];
    }

     reverseArr(N, A);

    // for (int a =0; a<A; a++){
    //     cout << N[a] << " man" << endl;
    // }

    return 0; 
}