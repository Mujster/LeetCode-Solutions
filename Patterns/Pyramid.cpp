#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter No Of Rows:\n";
    cin>>n;
    
    for(int i=0;i<n;i++){
       for(int j=n-i;j>0;j--){
           cout<<" ";
       }
       for(int k=0;k<=i;k++){
           cout<<"*";
       }
       for(int s=0;s<i;s++){
           cout<<"*";
       }
       cout<<'\n';
    }
    return 0;
}