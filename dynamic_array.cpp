#include<bits/stdc++.h>
using namespace std;

// static array
// int main(){
//     int total = 0;
//     int a[5];
//     for(int i=0; i< 5; i++){
//         cin >> a[i];
//     }
//     for(int i = 0; i<5; i++){
//         cout << a[i] << " ";
//         // total = total+a[i];
//     }
//         // cout << total << " ";

//     return 0;
// }

// dynamic array 
int* fun(){
    int* a = new int[6];
    for(int i=0; i< 6; i++) {
        cin >> a[i];
    }
    return a;
} 


int main(){
    int* b = fun();
    for(int x=0; x<6; x++){
        cout << b[x] << " ";
    } 
    return 0;
}