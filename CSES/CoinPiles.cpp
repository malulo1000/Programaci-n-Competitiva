#include <bits/stdc++.h>

using namespace std;


int main(){
    long long t, a, b;

    cin>>t;

    for(long long i=0;i<t;i++){
        cin>>a>>b;
        if(a==b){
            if(a%3==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(a>b){
            while(a>b){
                b--;
                a-=2;
            }
            if(a%3==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            while(b>a){
                a--;
                b-=2;
            }
            if(a%3==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}