#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> abc(26,0);
    string n, m;
	int x=0, impar=0;
    bool flag;
	
	cin>>n;

    for(long long i=0;i<n.size();i++){
        x=int(n[i])-65;
        abc[x]++;
    }
    
    for(long long i=0;i<26;i++){
        if((abc[i]%2!=0)&&(abc[i]>0)){
            impar++;
        }
    }
    
    if(impar==0||impar==1){
        for(long long i=0;i<26;i++){
            if((abc[i]%2==0)&&(abc[i]>0)){
                for(long long j=0;j<abc[i]/2;j++){
                    m.push_back(char(i+65));
                }
            }
        }
        if(impar==1){
            for(long long i=0;i<26;i++){
                if((abc[i]%2!=0)&&(abc[i]>0)){
                    for(long long j=0;j<abc[i];j++){
                        m.push_back(i+65);
                    }
                    
                }
            }
        }
        for(long long i=25;i>=0;i--){
            if((abc[i]%2==0)&&(abc[i]>0)){
                for(long long j=0;j<abc[i]/2;j++){
                    m.push_back(char(i+65));
                }
            }            
        }        
    }
    else{
        cout<<"NO SOLUTION";
    }

    cout<<m;

    return 0;
}