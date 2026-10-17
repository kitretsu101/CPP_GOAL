#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int num=1;

        for(int s=0;s<n-i-1;s++){       //space er jonno
            cout<< " ";
        }

        for(int j=0;j<=i;j++){
            cout<< num <<" ";

            num= num*(i-j)/(j+1);
            //    1*(3-0)/(0+1)=3/1=3
            //    3*(3-1)/(1+1)=6/2=3
            //    3*(3-2)/(2+1)=3/3=1
        }

        cout<<endl;
    }
}