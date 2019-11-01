#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>j>>k;
		i=__gcd(j,k);
		if(i==1)
		cout<<"Finite\n";
		else
		cout<<"Infinite\n";
	}
}