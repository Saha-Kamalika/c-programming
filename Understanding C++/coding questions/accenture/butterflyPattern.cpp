#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        
        for(int j=1;j<=i;j++) cout<<"*";
        
        int sp=2*(n-i);
        for(int j=0;j<sp;j++) cout<<" ";
        
        for(int j=1;j<=i;j++) cout<<"*";
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++) cout<<"*";
            
        int sp=2*(n-i);
        for(int j=0;j<sp;j++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<"*";
        cout<<endl;
    }
}
/*
5
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/