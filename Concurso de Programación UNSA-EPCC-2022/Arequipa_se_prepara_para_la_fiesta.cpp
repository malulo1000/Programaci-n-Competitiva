#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int x=0, y=0, z=0, cos=0;
    char tipo[1025],def[1025], b[]="BAILES", c[]="COMIDA", q[]="CULTURA";

    cin>>x>>y>>z;
    cin>>cos>>tipo;cin.getline(def,1025,'\n');
    
    for(int i=1;i<strlen(def);i++){
        def[i-1]=def[i];
    }
    def[strlen(def)-1]='\0';

    for(;;){
        if(strcmp(tipo,b)==0){
            cout<<"BAILES"<<endl;
            do{
                if(x>=cos){
                    x-=cos;
                    if(x>=0){
                        cout<<def<<endl;
                    }
                }
                cin>>cos>>tipo;cin.getline(def,1015,'\n');
                for(int i=1;i<strlen(def);i++){
                    def[i]=def[i-1];
                }
                def[strlen(def)-1]='\0';

            }while(strcmp(tipo,b)==0);

        }

        if(strcmp(tipo,c)==0){
            cout<<"COMIDA"<<endl;
            do{
                if(y>=cos){
                    y-=cos;
                    if(y>=0){
                        cout<<def<<endl;
                    }
                }
                cin>>cos>>tipo;cin.getline(def,1015,'\n');
                for(int i=1;i<strlen(def);i++){
                    def[i-1]=def[i];
                }
                def[strlen(def)-1]='\0';
            }while(strcmp(tipo,c)==0);

        }

        if(strcmp(tipo,q)==0){
            cout<<"CULTURA"<<endl;
            do{
                if(z>=cos){
                    z-=cos;
                    if(z>=0){
                        cout<<def<<endl;
                    }
                }
                cin>>cos>>tipo;cin.getline(def,1015,'\n');
                for(int i=1;i<strlen(def);i++){
                    def[i-1]=def[i];
                }
                def[strlen(def)-1]='\0';
            }while(strcmp(tipo,q)==0);
        }
    }

    return 0;
}