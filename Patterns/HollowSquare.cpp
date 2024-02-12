#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter N\n";
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int k=n-i;k>0;k--){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=n-i;k>0;k--){
            cout<<"*";
        }
        cout<<'\n';
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int k=n-i;k>1;k--){
            cout<<" ";
        }
        for(int k=n-i;k>1;k--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<'\n';
        
    }
    return 0;
}
