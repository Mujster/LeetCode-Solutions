#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> temp(s.size());
        int k=0;
        for(int i=s.size()-1;i>=0;i--){
            temp.at(k)=s.at(i);
            k++;
        }
        s=temp;
    }
};

int main(){
    Solution s;
    vector<char> str={'h','e','l','l','o'}; 
    s.reverseString(str);
    for(int i=0;i<str.size();i++){
        cout<<str.at(i);
    }
    return 0;
}