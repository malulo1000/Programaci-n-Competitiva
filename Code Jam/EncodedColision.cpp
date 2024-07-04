#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int n1;
        vector<int> abc (26);
        map<string, int> mapa;
        for(int j=0; j<26; j++){
            cin>>abc[j];
        }
        cin>>n1;
        for(int j=0; j<n1;j++){
            string aux;
            cin>>aux;
            int tradu=0;
            for(int k=0; k<aux.length();k++){
                char z = aux[2];
                int flag = int(z);
                tradu+=abc[flag-64];
                
                tradu*=10;
            }
            tradu/=10;

            mapa.insert(pair<string, int>(aux, tradu));
        }

        map<string, int>::iterator iterador = mapa.begin();

        bool flag = false;

        while (iterador != mapa.end()) {
            int valorActual = iterador->second;  
        
        
            map<string, int>::iterator iterador2 = mapa.begin();
            while (iterador2 != mapa.end()) {
                if (iterador != iterador2 && valorActual == iterador2->second) {
                    
                    flag = true;
                    break;
                }
                ++iterador2;
            }
        
            if (flag) {
                break;
            }
            ++iterador;
        }

        if(flag){
            cout<<"Case #"<<i+1<<": YES"<<"\n";
        }
        else{
            cout<<"Case #"<<i+1<<": NO"<<"\n";
        }

	}

    return 0;
}