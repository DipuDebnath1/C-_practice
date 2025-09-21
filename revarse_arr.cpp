#include<bits/stdc++.h>
using namespace std;


void reverseArr( int* N, int n){
    int start = 0;
    int end = n-1;
    while(start < end){
        swap(N[start], N[end]);
        start++;
        end--;
    }
      for(int a = 0; a < n; a++){
        cout << N[a] << " ";
    }
    cout << endl ;
}
int main(){
    int A;
    cin >> A;
     int *N = new int [A];
    for (int a =0; a<A; a++){
        cin >> N[a];
    }
     reverseArr(N, A);
    delete[] N;
    return 0; 
}