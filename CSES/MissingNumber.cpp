#include <bits/stdc++.h>

using namespace std;

int main(){
    long int x, y;
    cin>>x;
    y=x-1;
    vector<int> flag(x,0);
    for(int i=0;i<y;i++){
        cin>>x;
        flag[x-1]=1;
    }
    for(int i=0;i<flag.size();i++){
        if(flag[i]==0){
            cout<<i+1;
        }
    }

    return 0;
}