#include<iostream>
#include<string>
#include<vector>

using namespace std;

bool numespecial(int n)
{
	vector<int> count(9,0);
	string N=to_string(n);
	for(auto &digito:N)
	{
		if(digito=='0')
			return false;
		else
		{
			if(count[digito-'0'-1]==1)
				return false;
			count[digito-'0'-1]++;
		}
	}
	return true;
}

int main()
{
	int n,res=0;
	cin>>n;
	for(int i=n+1;i<987654322;i++)
		if(numespecial(i))
		{
			res=i;
			break;
		}
	cout<<res;
	return 0;
}
