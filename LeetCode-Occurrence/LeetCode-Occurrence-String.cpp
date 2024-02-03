#include<iostream>
using namespace std;

class Solution {
    public:
    int strStr(string haystack, string needle) {
        for (int i = 0; i < haystack.length(); i++) {
            int k = i;
            for (int j = 0; j < needle.length(); j++) {
                if (k < haystack.length() && haystack[k] == needle[j]) {
                    if (j == needle.length() - 1) {
                        return k - j;
                    }
                    k++;
                }
                else {
                    break;
                }
            }
        }
        return -1;
    }
};
//s a d b u t s a d
//0 1 2 3 4 5 6 7 8 

int main() {
    Solution obj;
    cout<< obj.strStr("ssdbutsad", "sad");
    return 0;
}