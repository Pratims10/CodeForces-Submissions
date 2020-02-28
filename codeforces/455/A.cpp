#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	ll f[100001]={0};
	for(i=0;i<n;i++)
	{
		cin>>j;
		f[j]++;
	}
	ll ar[100001][2];
	ar[0][0]=0;
	ar[0][1]=0;
	if(f[1])
	{
		ar[1][0]=f[1];
		ar[1][1]=0;
	}
	else
	{
		ar[1][0]=ar[1][1]=0;
	}
	for(i=2;i<=100000;i++)
	{
		if(f[i]==0)
		{
			ll x=max(ar[i-1][0],ar[i-1][1]);
			ar[i][0]=x;
			ar[i][1]=x;
		}
		else
		{
			ar[i][0]=ar[i-1][1]+f[i]*i;
			ar[i][1]=max(ar[i-1][0],ar[i-1][1]);
		}
	}
	cout<<max(ar[100000][0],ar[100000][1]);
}