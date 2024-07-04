#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    long long maxBailes, maxMusica, maxComida, maxExpos, maxMedia;
    long long acumBailes=0,acumMusica=0,acumComida=0,acumExpos=0,acumMedia=0;
    long long cantidad;
    
	cin>>maxBailes;
	cin>>maxMusica;
	cin>>maxComida;
	cin>>maxExpos;
	cin>>maxMedia;
    
	string line,categoria,name;
    vector<string> bailes,musica,comida,expos,media;
	//supondremos que el programa termina cuando cantidad = -1
    cin>>cantidad;
	while(cantidad!=-1)
	{
        cin>>categoria;
        cin.get(); getline(cin,name);//cin.get() evita que se almacene el espacio en name, quitar para probar
        if(categoria=="BAILES")
		{
            if((cantidad+acumBailes)<=maxBailes)
			{
                bailes.emplace_back(name);
                acumBailes+=cantidad;
            }
        }
        else if(categoria=="MUSICA")
		{
			if((cantidad+acumMusica)<=maxMusica)
			{
                musica.emplace_back(name);
                acumMusica+=cantidad;
            }
        }
		else if(categoria=="COMIDA")
		{
			if((cantidad+acumComida)<=maxComida)
			{
                comida.emplace_back(name);
                acumComida+=cantidad;
            }
        }
        else if(categoria=="EXPOS")
		{
        	if((cantidad+acumExpos)<=maxExpos)
			{
                expos.emplace_back(name);
                acumExpos+=cantidad;
            }
        }
        else if(categoria=="MEDIA")
		{
		    if((cantidad+acumMedia)<=maxMedia)
			{
                media.emplace_back(name);
                acumMedia+=cantidad;
            }
        }
        cin>>cantidad;
    }
    cout<<"BAILES"<<endl;
    for(auto &n:bailes)
	{
        cout<<n<<endl;
    }
    cout<<"MUSICA"<<endl;
    for(auto &n:musica)
	{
        cout<<n<<endl;
    }
	cout<<"COMIDA"<<endl;
    for(auto &n:comida)
	{
        cout<<n<<endl;
    }
    cout<<"EXPOS"<<endl;
    for(auto &n:expos)
	{
        cout<<n<<endl;
    }
    cout<<"MEDIA"<<endl;
    for(auto &n:media)
	{
        cout<<n<<endl;
    }
    return 0;
}
