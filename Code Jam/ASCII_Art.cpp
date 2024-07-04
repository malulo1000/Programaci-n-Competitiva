#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        long long x=0, y=0, aux=26, cont=1;
        cin>>x;
        
        while(x>aux){
            x-=aux;
            cont++;
            aux=(26*cont);
        }

        if(x%cont==0){
            cout<<"Case #"<<i+1<<": "<<char((x/cont)+64)<<"\n";
        }
        else{
            unsigned int res=0;
            res=(x/cont)+1;
            cout<<"Case #"<<i+1<<": "<<char((res)+64)<<"\n";
        }

    }

    return 0;
}