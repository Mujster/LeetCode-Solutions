#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter N";
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int k=0;k<i;k++){
            cout<<"*";
        }
        for(int k=n-i;k>1;k--){
            cout<<" ";
        }
        for(int k=n-i;k>1;k--){
            cout<<" ";
        }
        for(int k=0;k<i;k++){
            cout<<"*";
        }
        cout<<'\n';
    }
    return 0;
}