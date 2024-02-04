#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(!nums.empty()){
            vector<int> temp;
            temp.push_back(nums.at(0));
            int k=1;
            for (int i = 1; i < nums.size(); i++) {
                if (nums.at(i) != nums.at(i - 1)) {
                    temp.push_back(nums.at(i));
                    k++;
                }
            }
        nums=temp;
        return k;
        }
        return -1;
    }
};

// 1 1 2 
// 
// 1 2
