#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, sum=1;
    cin>>n;
    vector<long long> x(n);

    for(long long i=0;i<n;i++){
        cin>>x[i];
    }

    sort(x.begin(),x.end());

    for(long long i=0;i<n&&x[i]<=sum;i++){
        sum+=x[i];
    }

    cout<<sum<<"\n";
    
    return 0;
}