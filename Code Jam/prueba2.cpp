#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int n1;
        vector<int> abc (26);
        for(int j=0; j<26; j++){
            cin>>abc[j];
        }
        
        cin>>n1;
        string mapa[n1];
        for(int j=0; j<n1;j++){
            string aux;
            cin>>aux;
            int tradu=0;
            for(int k=0; k<aux.length();k++){
                char z = aux[k];
                int flag = int(z);
                mapa[j].push_back(static_cast<char>(abc[flag-65]));
                
            }
        }

        bool flag=false;

        unordered_set<string> hash_set;
        for (int j = 0; j < n1; j++) {
            if (hash_set.count(mapa[j]) > 0) {
                flag = true;
                break;
            }
            hash_set.insert(mapa[j]);
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