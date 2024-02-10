#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter No. Of Rows\n";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=n-i;j>0;j--){
            cout<<"*";
        }
        for(int k=n-i-1;k>0;k--){
            cout<<"*";
        }
        cout<<'\n';
    }
    for(int i=0;i<n;i++){
        for(int j=n-i-1;j>0;j--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int k=0;k<i;k++){
            cout<<"*";
        }
        cout<<'\n';
    }
    
    return 0;
}