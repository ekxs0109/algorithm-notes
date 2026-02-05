//
// Created by ekxs on 2026/2/5.
//

#include <iostream>
#include <string>
using namespace std;


string checkPAT(string s) {
    int PPos = -1, APos = -1, TPos = -1;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'P') {
            if (PPos > -1) return "NO";
            PPos = i;
            continue;
        };
        if (s[i] == 'A') {
            APos = i;
            continue;
        };
        if (s[i] == 'T') {
            if (TPos > -1)  return "NO";
            TPos = i;
            continue;
        };
        return "NO";
    }

    if (PPos == -1 || APos == -1 || TPos == -1) return "NO";
    if (TPos - PPos <=0  || APos - PPos <=0) return "NO";


    int aCount =  PPos;
    int bBCount = TPos - PPos -1;

    int cCount = s.length() - TPos - 1;

    return cCount == aCount*bBCount ? "YES" : "NO";

}


int main() {
    string a;
    cin >> a;
    while (cin >> a)
        cout << checkPAT(a) << endl;

    return 0;
}
