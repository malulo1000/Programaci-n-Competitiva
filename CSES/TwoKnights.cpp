#include <bits/stdc++.h>

using namespace std;

int main(){
    long long  x, y;
    cin>>x;
    for(long long i=1;i<=x-1;i++){
        y=(6*(i-1))+((16*(i-1)*(i-2))/2)+((30*(i-1)*(i-2)*(i-3))/(3*2))+((12*(i-1)*(i-2)*(i-3)*(i-4))/(4*3*2));
        cout<<y<<endl;
    }
    y=(6*(x-1))+((16*(x-1)*(x-2))/2)+((30*(x-1)*(x-2)*(x-3))/(3*2))+((12*(x-1)*(x-2)*(x-3)*(x-4))/(4*3*2));
    cout<<y;
    return 0;
}