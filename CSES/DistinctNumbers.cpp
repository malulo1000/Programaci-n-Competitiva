#include <bits/stdc++.h>

using namespace std;

int main(){
    map<int,int> x;
    int n=0, y=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>y;
        x[y]=1;
    }

    cout<<x.size();
    
    return 0;
}