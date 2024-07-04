#include <iostream>

using namespace std;

int main(){
    int N, M, x=0;
    bool flag=false;

    cin>>N>>M;

    int plaz[N];

    for(int i=0;i<N;i++){
        cin>>plaz[i];
    }
    
    for(int i=0;i<M;i++){
        cin>>x;
        for(int j=0;j<N;j++){
            if(plaz[j]==x){
                cout<<j<<endl;
                flag=true;
                break;
            }
        }
        if(flag==false){
            cout<<"-1"<<endl;
        }
        flag=false;
    }


    return 0;
}