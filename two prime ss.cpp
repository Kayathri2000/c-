#include<iostream>
using namespace std;
int prime(int n)
{
	int i;
	int k=1;
	for(i=2;i<=n/2;i++)
	{if(n%i==0)
	{k=0;
	break;
	}
	}
	return k;
}
int main()
{
	int n,i;
	cout<<"enter any postive number= ";
	cin>>n;
	{
		for(i=2;i<=n/2;i++)
		if(prime(i))
		{
			if(prime(n-i))
			{
				cout<<n<<"="<<i<<"+"<<n-i<<"\n";
			}
		}
	}
	return 0;
}
