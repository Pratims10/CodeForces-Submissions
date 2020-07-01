#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,a,b,c,v;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ll ar[n][n];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			ar[i][j]=0;
		}
		ll ctr=k%n;
		i=0,j=0;
		while(ctr>0)
		{
			for(ll x=0;x<k/n+1;x++)
			ar[i][(j++)%n]=1;
			i++;
			ctr--;
		}
		while(i<n)
		{
			for(ll x=0;x<k/n;x++)
			ar[i][(j++)%n]=1;
			i++;
		}
		if(k%n==0)
		cout<<0<<endl;
		else cout<<2<<endl;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			cout<<ar[i][j];
			cout<<endl;
		}
	}
}