#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, x ,y, aux;
    cin>>n;
    for(long long i=0;i<n;i++){
        cin>>x>>y;
        x--;
        y--;
        if(x>y){
            aux=((x*x)+x+1);
            if(x%2==0){
                aux-=(x-y);
            }
            else{
                aux+=(x-y);
            }
        }
        else if(x<y){
            aux=((y*y)+y+1);
            if(y%2==0){
                aux+=(y-x);
            }
            else{
                aux-=(y-x);
            }
        }
        else{
            aux=(x*x)+x+1;
        }
        cout<<aux<<endl;
    }
    return 0;
}