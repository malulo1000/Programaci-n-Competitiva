#include <bits/stdc++.h>

using namespace std;

#define c 1000000007

int main(){
    int x, y=1;
    cin>>x;

    for(int i=0;i<x;i++){
        y*=2;
        y%=c;
    }
    cout<<y<<endl;

    return 0;
}