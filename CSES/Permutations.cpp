#include<bits/stdc++.h>

using namespace std;

int main(){
    long int x, z;
    cin>>x;
    vector<int> y(x,0);
    if(x%2==0){
        z=2;
        if(x<=3){
            cout<<"NO SOLUTION"<<endl;
        }
        else if(x==4){
            cout<<"2"<<" "<<"4"<<" "<<"1"<<" "<<"3";
        }
        else{
            for(int i=0;i<(x+1)/2;i++){
                y[i]=z;
                z+=2;
            }
            z-=(5);
            y[(x+1)/2]=z;
            z+=2;
            y[((x+1)/2)+1]=z;
            z-=4;
            y[((x+1)/2)+2]=z;
            for(int i=((x+1)/2)+3;i<x;i++){
                z-=2;
                y[i]=z;
            }
        }
    }
    else{
        z=1;
        if(x==1){
            cout<<"1";
        }
        else if(x<=3){
            cout<<"NO SOLUTION"<<endl;
        }
        else if(x==5){
            cout<<"1"<<" "<<"3"<<" "<<"5"<<" "<<"2"<<" "<<"4";
        }
        else{
            for(int i=0;i<(x+1)/2;i++){
                y[i]=z;
                z+=2;
            }
            z-=(5);
            y[(x+1)/2]=z;
            z+=2;
            y[((x+1)/2)+1]=z;
            z-=4;
            y[((x+1)/2)+2]=z;
            for(int i=((x+1)/2)+3;i<x;i++){
                z-=2;
                y[i]=z;
            }
        }
    }

    if(5<x){
        for(int i=0;i<x-1;i++){
            cout<<y[i]<<" ";
        }
        cout<<y[x-1];
    }
    return 0;
}