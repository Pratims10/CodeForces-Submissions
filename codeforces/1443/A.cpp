#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll x=n*2+2;
		while(n--)
		{
			cout<<x<<' ';
			x+=2;
		}
		cout<<endl;
	}
}