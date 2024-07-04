#include <bits/stdc++.h>

using namespace std;

void torre(long long n,int a,int c, int b){
    if(n==1){
        cout<<a<<" "<<c<<endl;  
    }
    else{
        torre(n-1,a,b,c);
        cout<<a<<" "<<c<<endl;
        torre(n-1,b,c,a);
    }
}

int main(){
    long long n;
    int x=1, y=2, z=3;

    cin>>n;

    cout<<pow(2,n)-1<<endl;

    torre(n, x, z, y);

    return 0;
}