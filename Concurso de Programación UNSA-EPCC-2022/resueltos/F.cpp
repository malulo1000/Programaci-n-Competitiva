#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

int suminvitados(vector<int> &invitados)
{
	int sum;
	for(auto &invitado:invitados)
		sum+=invitado;
	return sum;
}

int main()
{
	int N,M,a,b,pos;
	cin>>N>>M;
	vector<pair<int,int>> conexiones;
	vector<int> asegurar; //personas a asegurar
	vector<int> invitados(N,0); //mantiene 0 si NO esta invitado, 1 si esta invitado
	vector<int> conocidos(N,0); //mantiene cuantos conocidos tiene cada persona
	for(int i=0;i<M;i++)
	{
		cin>>a;
		cin>>b;
		conexiones.push_back(make_pair(a-1,b-1));
	}
	for(int i=0;i<M;i++)
	{
		conocidos[conexiones[i].first]++;
		conocidos[conexiones[i].second]++;
	}
	while(suminvitados(invitados)!=N)
	{
		pos=distance(conocidos.begin(),max_element(conocidos.begin(),conocidos.end()));
		asegurar.push_back(pos);
		invitados[pos]=1;
		conocidos[pos]=0;
		for(auto &conexion:conexiones)
		{
			if(conexion.first==pos)
				invitados[conexion.second]=1;	
			else
				invitados[conexion.first]=1;
		}
	}
	cout<<asegurar.size()<<endl;
	sort(asegurar.begin(),asegurar.end());
	for(auto &persona:asegurar)
		cout<<persona+1<<endl;
	
}
