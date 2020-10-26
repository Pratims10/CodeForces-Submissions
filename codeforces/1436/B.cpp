#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool isPrime(ll x)
{
	for(ll i=2;i*i<=x;i++)
	{
		if(x%i==0)
		return false;
	}
	return true;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll y;
		for(i=1;i<=100000;i++)
		{
			if(isPrime(i+n-1) and !isPrime(i))
			{
				y=i;
				break;
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			if(j==i)
			cout<<y<<' ';
			else cout<<"1 ";
			cout<<'\n';
		}
	}
}