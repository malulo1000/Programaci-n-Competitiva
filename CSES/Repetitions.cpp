#include <bits/stdc++.h>

using namespace std;

int main(){
    string x;
    long int cont, flag=0;
    cin>>x;
    for(int i=1;i<x.size();i++){
        if(x[i]==x[i-1]){
            cont++;
        }
        else{
            cont=0;
        }

        if(flag<cont){
            flag=cont;
        }
    }

    cout<<flag+1;

    return 0;
}