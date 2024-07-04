#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin>>n;
    for(long long i=0;i<n;i++){
        long long loc=0, cab=0, aux1, aux2;
        cin>>loc>>cab;
        vector<int> cables (loc,0);
        for(long long j=0;j<cab;j++){
            string x;
            fflush(stdin);
            cin>>x;
            if(x[0]=='X'){
                cin>>aux1;
                if(cables[aux1]==0){
                    cables[aux1]=1;
                }
                else{
                    cables[aux1]=0;
                }
            }
            else if(x[0]=='C'){
                cin>>aux1>>aux2;
                if(cables[aux1]==1){
                    if(cables[aux2]==0){
                        cables[aux2]=1;
                    }
                    else{
                        cables[aux2]=0;
                    }
                }
            }
        }
        cout<<"|";
        for(long long j=0;j<loc;j++){
            cout<<cables[j];
        }
        cout<<">\n";
    }
    return 0;
}