//
// Created by ekxs on 2026/2/14.
//


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int total;
    cin >> total;
    int sortNum ;
    cin>>sortNum;

    vector<int> nums(total);

    sortNum = sortNum%total;


    for (int i =0;i<total;i++) {
        cin >> nums[i];
    }




    if(sortNum!=0) {
        reverse(nums.begin() , nums.begin() + (total-sortNum));
        reverse(nums.begin()+(total-sortNum) , nums.end());
        reverse(nums.begin(),nums.end());
    }


    for (int i = 0; i < total; i++) {
        cout << nums[i] << (i == total - 1 ? "" : " ");
    }
    cout<<endl;
    return 0;
}