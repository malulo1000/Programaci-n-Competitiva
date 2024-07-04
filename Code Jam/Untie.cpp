#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        string x;
        cin>>x;
        vector<char> circulo;

        for(int j =0;j<x.length();j++){
            circulo.push_back(x[j]);
        }
        
        for(int j=0;j<x.length()-1;j++){
            if(j==0){
                if(circulo[j]==circulo[j+1]||circulo[j]==circulo.back()){
                    if(circulo[j]==circulo.back()){

                    }
                    else{
                        switch(circulo[j]){
                            case 'P':
                                circulo[j]='R';
                                break;
                            case 'R':
                                circulo[j]='S';
                                break;
                            case 'S':
                                circulo[j]='P';
                                break;
                        }
                    }
                }             
            }
            else{

            }

        }
    }

    return 0;
}