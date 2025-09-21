// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int *p;
//  // ************* static  
// void fun() {
//     int x = 10;
//     p = &x;
//     cout << *p << "result from fun"<< endl;
//     return;
// }

// int main() {
//     fun();
//     // Write C++ code here
//     cout << "reault form main" << *p << endl;

//     return 0;
// }

//  ************* dynamic 
// void fun() {
//     int  *x = new int;
//     *x = 12;
//     p = x;
//     cout << *p << "result from fun"<< endl;
//     return;
// }

// int main() {
//     fun();
//     // Write C++ code here
//     cout << "reault form main" << *p << endl;

//     return 0;
// }

int fun() {
    int x = 10;
    
    cout << x << "result from fun"<< endl;
    return x;
}

int main() {
    int a = fun();
    // Write C++ code here
    cout << "reault form main" << a << endl;

    return 0;
}