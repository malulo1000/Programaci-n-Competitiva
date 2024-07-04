#include <bits/stdc++.h>

using namespace std;

int main(){
    long long x, y, suma, conta=0, contb=0;
    cin>>x;
    vector<int> first, second, flag(x+1,0);

    suma=(((x)*(x+1))/2);
    if(suma%2==0){
        cout<<"YES"<<endl;
        y=suma/2;
        for(long long i=x;i>=1;i--){
            if(y-i>=0){
                y-=i;
                conta++;
                first.push_back(i);
                flag[i]=1;
                if(y==0){
                    break;
                }  
            }
        }
        for(long long i=1; i<x;i++){
            if(flag[i]==0){
                second.push_back(i);
            }
        }

        cout<<conta<<endl;
        for(long long i=0;i<conta-1;i++){
            cout<<first[i]<<" ";
        }
        cout<<first.back()<<endl;

        contb=x-conta;
        cout<<contb<<endl;
        for(long long i=0;i<contb-1;i++){
            cout<<second[i]<<" ";
        }
        cout<<second.back()<<endl;
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}