#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
   vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> temp;
       for (int i = 0; i < nums.size(); i++) {
           for (int j = i + 1; j < nums.size(); j++) {
               if (nums.at(i) + nums.at(j) == target) {
                   temp.push_back(i);
                   temp.push_back(j);
                   break;
               }
           }
       }
       return temp;
   }
};

int main() {
  //Use Gpt to generate Main
   return 0;
}