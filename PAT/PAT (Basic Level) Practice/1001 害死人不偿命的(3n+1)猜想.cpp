//
// Created by ekxs on 2026/2/4.
//
#include <iostream>
using namespace std;

int getStep(int n){
    int step = 0;

    while(n!=1){
        step ++;
        n = n%2==0? (n>>1): ((3*n+1)>>1);
    }
    return step;
}



int main()
{
    int a;

    while (cin >> a)
        cout << getStep(a) << endl;

    return 0;
}