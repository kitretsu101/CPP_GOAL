#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    for(int i=0;i<5;i++){
        for(int p=0;p<5-i-1;p++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=4;i++){
        for(int p=0;p<i;p++){
            cout<<" ";
        }
        for(int j=1;j<=9-(2*i);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}