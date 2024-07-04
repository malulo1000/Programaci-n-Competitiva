#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    map<char, string> x;

    x['a']="is ruled by Alice.";
    x['e']="is ruled by Alice.";
    x['i']="is ruled by Alice.";
    x['o']="is ruled by Alice.";
    x['u']="is ruled by Alice.";
    x['A']="is ruled by Alice.";
    x['E']="is ruled by Alice.";
    x['I']="is ruled by Alice.";
    x['O']="is ruled by Alice.";
    x['U']="is ruled by Alice.";
    x['y']="is ruled by nobody.";
    x['Y']="is ruled by nobody.";

    cin>>t;

    for(int i=1;i<=t;i++){
        string y;
        cin>>y;
        if(x.find(y.back())!=x.end()){
            cout<<"Case #"<<i<<": "<<y<<" "<<x[y.back()]<<endl;
        }
        else{
            cout<<"Case #"<<i<<": "<<y<<" is ruled by Bob."<<endl;
        }
    }

    /*int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        string x;
        cin>>x;
        switch(x.back()){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': cout<<"Case #"<<i<<": "<<x<<" is ruled by Alice."<<endl;break;
            case 'y': cout<<"Case #"<<i<<": "<<x<<" is ruled by nobody."<<endl;break;
            default: cout<<"Case #"<<i<<": "<<x<<" is ruled by Bob."<<endl;break;
        }
    }*/

    return 0;
}