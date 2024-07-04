#include <bits/stdc++.h>

using namespace std;

long long binario(long long x){
    if(x<2){
    	return x;
    }
    else{
        return x%2+(10*binario(x/2));
    }
}

int main(){
    long long n=0;

    cin>>n;

    for(long long i=0;i<pow(2,n);i++){
        cout<<setfill('0')<<setw(n)<<binario(i)<<endl;
    }

    return 0;
}