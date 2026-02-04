//
// Created by ekxs on 2026/2/4.
//

#include <iostream>
#include <string>
using namespace std;

const string pinyinArr[] = {
    "ling","yi","er","san","si","wu","liu","qi","ba","jiu"
};

string getPinYin(string str){
    string result;
    int res = 0;
    for(const char c: str){
        const int digit = c-'0';
        res += digit;;
    }
    str = to_string(res);
    bool flag = false;
    for (const char c: str) {
        if (flag) result += " ";
        flag = true;
        result+=pinyinArr[c - '0'];
    }
    return result;
}

int main()
{
    string a;
    while (cin >> a){
        cout << getPinYin(a) << endl;
    }
    return 0;
}