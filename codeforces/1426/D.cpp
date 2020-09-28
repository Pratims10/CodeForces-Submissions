#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	map<ll,ll> mp;
	mp[0]=1;
	ll s=0;
	ll ctr=0;
	for(i=0;i<n;i++)
	{
		s+=ar[i];
		if(mp[s])
		{
			mp.clear();
			mp[0]=1;
			s=ar[i];
			ctr++;
		}
		mp[s]++;
	}
	cout<<ctr;
}