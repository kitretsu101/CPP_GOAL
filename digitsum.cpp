#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum,p=0;
    cin>>n;

    while(n>0){
        p += n%10;
        sum= p;
        n=n/10;
    }
    cout<<sum;
    return 0;
}