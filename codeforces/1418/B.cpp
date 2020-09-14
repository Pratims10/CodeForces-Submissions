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
		cin>>n;
		ll ar[n],l[n];
		for(i=0;i<n;i++)
		cin>>ar[i];
		for(i=0;i<n;i++)
		cin>>l[i];
		vector<ll> v;
		for(i=0;i<n;i++)
		if(l[i]==0)
		v.push_back(ar[i]);
		sort(v.begin(),v.end(),srt);
		j=0;
		for(i=0;i<n;i++)
		{
			if(l[i]==0)
			{
				ar[i]=v[j++];
			}
		}
		for(i=0;i<n;i++)
		cout<<ar[i]<<' ';
		cout<<endl;
	}
}