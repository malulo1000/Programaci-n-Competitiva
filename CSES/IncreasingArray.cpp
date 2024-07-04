#include <bits/stdc++.h>

using namespace std;

int main(){
    long int x, cont=0;
    cin>>x;
    vector<int> y(x,0);

    for(int i=0;i<x;i++){
        cin>>y[i];
    }

    for(int i=1;i<x;i++){
        if(y[i]<y[i-1]){
            cont+=y[i-1]-y[i];
            y[i]=y[i-1];
        }
    }
    cout<<cont;
}