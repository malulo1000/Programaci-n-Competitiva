#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n;
    cin>>n;

    for(long long i=0; i<n; i++){
        bool flag1=true;
        long long cant;
        vector<long long> rpta;
        unordered_map<long long, long long> color;
        cin>>cant;
        for(long long j=0; j<cant;j++){
            bool flag=false;
            long long x;
            
            cin>>x;
            if (color.count(x) > 0) {
                flag=true;
            }
            if(flag){
                if((color[x]+1==j)){
                    color[x]=j;
                }
                else if((color[x]-1==j)){
                    if(color[x]!=0){
                        color[x]=j;
                    }
                }
                else{
                    cout<<"Case #"<<i+1<<": IMPOSSIBLE\n";
                    flag1=false;
                    break;       
                }
            }
            else{
                color.insert(make_pair(x,j));
                rpta.push_back(x);
            }
        }

        if(flag1){
            cout<<"Case #"<<i+1<<":";
            for(long long j=0;j<rpta.size();j++){
                cout<<" "<<rpta[j];
            }
            cout<<"\n";
        }

        flag1=false;
        rpta.clear();
	}

    return 0;
}