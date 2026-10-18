#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=12,b=18,c=min(a,b);
    int count=0;
    
    for(int i=1; i<c;i++){
        if(a%i==0 && b%i==0){
            count=i;
        }
    }
    cout<<count;
    return 0;
    
}