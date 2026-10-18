#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=410;
    for (int i = 2; i < n-1; i++)
    {
        if(n%i==0){
            cout<<"Prime number not detected";
            break;
        }else{
            cout<<"Prime number!";
            break;
        }
    }
    return 0;
}