#include<bits/stdc++.h>
using namespace std;

/*
    koyta row banate chai? dhori 10 ta tahole first row te 10 ta then last row te 10 ta.majhe initial ar end e * baki jaygay faka

*/


int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1 || i==n || j==n){
                cout<<"*";
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}