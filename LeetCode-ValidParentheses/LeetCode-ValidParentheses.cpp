#include<iostream>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        char p1[]={'(',')'};
        char p2[]={'[',']'};
        char p3[]={'{','}'};
        int j=0;
        for(int i=0;i<s.length();){
            if(s[i]==p1[j]){
                i++;
                j++;
                if(s[i]==p1[j]){
                    return true;
                }
                else{
                    return false;
                }
            }
            else if(s[i]==p2[j]){
                i++;
                j++;
                if(s[i]==p2[j]){
                    return true;
                }
                else{
                    return false;
                }
            }
            else if(s[i]==p3[j]){
                i++;
                j++;
                if(s[i]==p3[j]){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
        return false;
    }
};

//working for [](){}
// logical error for [{()}]