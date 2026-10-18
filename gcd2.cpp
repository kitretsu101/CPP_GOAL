#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b==0){
        return a;
    }
    int remainder= a%b;
    a=b;
    gcd(a,remainder);
}

int main(){
    int a,b;
    cin>>a>>b;
    int c= max(a,b);
    int d= min(a,b);
    cout<<gcd(c,d);
    return 0;
}