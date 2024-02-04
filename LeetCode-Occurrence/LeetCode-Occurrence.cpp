#include<iostream>
using namespace std;
class Solution {
public:
int strStr(string haystack, string needle) {
    for (int i = 0; i < haystack.length();i++) {
        int k = i;
        for (int j = 0; j < needle.length(); j++) {
            if (k<haystack.length()&&haystack[k] == needle[j]) {
                if (j == needle.length() - 1) {
                    return k-j;
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

int main(){
    
}