//
// Created by ekxs on 2026/2/5.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;


struct student {
    string name;
    string num;
    int score{};
};


vector<student> getMinAndMax(vector<student>* s) {
    student *min = nullptr;
    student *max = nullptr;

    for (auto & i : *s) {
        if (min == nullptr || i.score < min->score) {
            min = &i;
        }
        if (max == nullptr || i.score > max->score) {
            max = &i;
        }
    }
    return {*max,*min};
}


int main() {
    int total;
    string a;
    vector<student> students;
    cin >> total;
    int i = 0;
    student st = student();
    while (cin >> a) {
        if (i % 3 == 0) {
            st.name = a;
        } else if (i % 3 == 1) {
            st.num = a;
        } else {
            st.score = stoi(a);

            students.push_back(st);
        }
        i++;
        if (students.size() >= total) break;
    }

    vector<student> res = getMinAndMax(&students);
    for (auto &s: res) {
        cout << s.name << ' ' << s.num << endl;
    }
    return 0;
}
