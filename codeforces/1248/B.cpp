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
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	sort(ar,ar+n,srt);
//	for(i=0;i<n;i++)
//	cout<<ar[i]<<' ';
//	cout<<endl;
	ll ans=0;
	ll s=0;
	for(i=0;i<n/2;i++)
	s+=ar[i];
	if(n%2==1)
	{
		s+=ar[i];
		i++;
	}
	ans=s*s;
	s=0;
	for(;i<n;i++)
	s+=ar[i];
	ans+=s*s;
	cout<<ans<<endl;
}