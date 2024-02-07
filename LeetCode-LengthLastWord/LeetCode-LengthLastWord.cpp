#include<iostream>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int k=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' '&& k==0){
                continue;
            }
            if(s[i]!=' '){
                k++;
            }
            if(s[i]==' '){
                break;
            }
        }
        return k;
    }
};
int main(){
    Solution s;
    cout<<s.lengthOfLastWord("Hello World")<<endl;
    return 0;
}   