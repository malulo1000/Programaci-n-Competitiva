#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;

    cin>>t;

    for(int i=1;i<=t;i++){
        long long n=0, m=0, c=0, sum=0;
        cin>>n>>m;
        for(long long j=0;j<n;j++){
            cin>>c;
            sum+=c;
        }
        cout<<"Case #"<<i<<": "<<sum%m<<endl;
    }

    return 0;
}