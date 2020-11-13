#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool srt(ll a,ll b)
{
	return a>b;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ll ar[n],b[n];
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>b[i];
		}
		sort(ar,ar+n);
		sort(b,b+n,srt);
		bool f=true;
		for(i=0;i<n;i++)
		if(ar[i]+b[i]>k)
		f=false;
		if(f)
		cout<<"Yes\n";
		else cout<<"No\n";
	}
}