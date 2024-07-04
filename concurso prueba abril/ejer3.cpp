#include <bits/stdc++.h>

using namespace std;

int main(){
    long long x1=0,y1=0,z1=0,x2=0,y2=0,z2=0;
    long long vel=0, ki=0;
    long long tiempo;
    while(cin>>x1>>y1>>z1>>x2>>y2>>z2>>vel>>ki){
        tiempo=(sqrt((pow(x2-x1,2))+(pow(y2-y1,2))+(pow(z2-z1,2))))/vel;
        ki=ceil(ki/(5000*2));

        if(tiempo<ki){
            cout<<"Lanzar kamehameha\n";
        }
        else{
            cout<<"Teleportacion\n";
        }
    }

    return 0;
}