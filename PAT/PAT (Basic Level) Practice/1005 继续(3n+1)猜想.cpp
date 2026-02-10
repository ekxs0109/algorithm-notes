//
// Created by ekxs on 2026/2/10.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int a, b;
    cin >> a;
    vector<int> st;
    vector<int> res;

    for (int i = 0; i < a; i++) {
        cin >> b;
        st.push_back(b);
        res.push_back(b);
    }

    for (auto n: st) {
        while (n != 1) {
            n = n % 2 == 0 ? (n >> 1) : ((3 * n + 1) >> 1);
            auto fi =find(res.begin(), res.end(), n);
            if (fi != res.end()) {
                res.erase(fi);
            }
        }
    }
    sort(res.begin(), res.end(),greater<>());
    bool flag = true;
    for (auto n: res) {
        if (!flag) cout<<" ";
        cout << n ;
        flag = false;
    }

    return 0;
}
