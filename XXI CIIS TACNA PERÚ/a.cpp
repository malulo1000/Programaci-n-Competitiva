#include<iostream>
#include<string>
#include<vector>

using namespace std;

void ultimo_numero(int N)
{
	if(N == 0)
	{
		cout<<"NUNCA"<<endl;
	}
	else
	{	                    //pos[0 1 2 3 4 5 6 7 8 9]	
		vector<int> arr(10,0); //[0 0 0 0 0 0 0 0 0 0]
		int M=0, sum=0, n;
		while(sum != 10)
		{
			M = M + N;
			string stri = to_string(M); //convierte numero a un string
			for(int i=0; i<stri.size(); i++)
			{
				n = stri[i] - '0'; // convierte caracter a numero
				if(arr[n] == 0) //no lo he visto aun?
				{
					arr[n] = 1; //registro que ya lo vi
					sum = sum + 1; //contar cuantos digitos se ha visto
				}
			}
		}
		cout<<M<<endl; //imprimir el ultimo numero
	}
}

int main()
{
	//T es el nro de casos de prueba
	//N es c/u de los numeros de nain
	int T, N;
	cin>>T;
	for(int i=0; i<T; i++)
	{
		cin>>N;
		cout<<"Case #"<<i+1<<": ";
		ultimo_numero(N); //funcion que imprimira el ultimo numero
	}
}