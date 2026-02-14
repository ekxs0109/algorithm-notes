//
// Created by ekxs on 2026/2/14.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int a;
    cin >> a;

    string res;
    int unit = 100;

    while (unit != 0) {
        int i = (a / unit) % 10;

        for (int j = 0; j < i; j++) {
            res += unit == 100 ? 'B' : unit == 10 ? 'S' : ('1' + j);
        }
        unit /= 10;
    }


    cout << res << endl;

    return 0;
}
