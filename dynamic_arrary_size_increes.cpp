#include<bits/stdc++.h>
using namespace std;

int main (){
    int *a = new int[3];
    int *b = new int[5];
    for(int i=0; i<3;i++){
        cin >> a[i];
    }
    for(int i=0; i<3;i++){
        b[i] = a[i];
    }

    b[3] = 30;
    b[4] = 40;

    delete[] a;

    for(int i=0; i<5;i++){
        // cout << a[i] << " ";
        // cout << endl;
        cout << b[i] << " ";
    }


    return 0;
}

