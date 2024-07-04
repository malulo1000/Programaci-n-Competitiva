#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int N,number,menores,pos;
	cin>>N;
	vector<int> permutacion(N,0);	//{0, 1, 0, 2, 2, 1, 2, 0} 
	vector<int> secuencia;			//{2, 4, 5, 1, 7, 6, 3, 8}
	for(int i=0;i<N;i++)
	{
		cin>>number;
		secuencia.push_back(number);
	}
	for(int i=N-1;i>=0;i--) //para cada numero, deben haber secuencia[i] menores a la derecha
	{
		menores=0;
		pos=N-1;
		while(menores<secuencia[i])
		{
			if(permutacion[pos]<i+1)
				menores++;
			pos--;
		}
		while(permutacion[pos]!=0)
			pos--;
		permutacion[pos]=i+1;
	}
	for(int i=0;i<N;i++)
		cout<<permutacion[i]<<" ";
}
