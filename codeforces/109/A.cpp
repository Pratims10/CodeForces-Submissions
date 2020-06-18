#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=1e9+7;
int main()
{
	ll i,j,k,m,n,t,x,y;
	cin>>n;
	for(i=n/7;i>=0;i--)
	{
		if((n-i*7)%4==0)
		{
			ll x=(n-i*7)/4;
			for(j=0;j<x;j++) cout<<4;
			for(j=0;j<i;j++) cout<<7;
			return 0;
		}
	}
	cout<<-1;
}