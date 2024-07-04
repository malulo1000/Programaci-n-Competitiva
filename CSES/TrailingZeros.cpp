#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int x=0, c=0, z=0;

    cin>>c;

    while(c>=5){
        z+=c/5;
        c/=5;
    }

    cout<<z<<endl;

    return 0;
}