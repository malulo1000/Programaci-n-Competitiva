#include <bits/stdc++.h>

using namespace std;

int main(){
    int x=0, y=0, z=0, sum=0;
    
    while(cin>>x>>y>>z){ 
        sum=y*z-z+x;
        if(sum<=1000){
            cout<<sum<<"\n";
        }
        else{
            cout<<"No existen los milenares"<<"\n";
        }
    }

    return 0;
}