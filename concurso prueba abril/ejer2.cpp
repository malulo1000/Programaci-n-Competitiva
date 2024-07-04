#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n=0;
    while(cin>>n){
        long long x[n];
        long long sum=0;
        for(long long i=0;i<n;i++){
            cin>>x[i];
        }
        for(long long i=0;i<n;i++){
            sum+=x[i];
        }
        cout<<sum<<"\n";
    }
    
    return 0;
}