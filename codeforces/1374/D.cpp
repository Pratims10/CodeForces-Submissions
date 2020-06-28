#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,a,b,c;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		vector<ll> v;
		for(i=0;i<n;i++)
		{
			cin>>j;
			if(j%k!=0) v.push_back(k-j%k);
		}
		n=v.size();
		ll ans=0;
		sort(v.begin(),v.end());
		if(v.size()==0) cout<<0<<endl;
		else if(v.size()==1)
		{
			cout<<v[0]+1<<endl;
		}
		else
		{
			map<ll,ll> mp;
			for(auto x:v)
			mp[x]++;
			ll mx=0,q;
			for(auto x:mp)
			{
				if(mx<=x.second)
				{
					mx=x.second;
					q=x.first;
				}
			}
			ans=(mx-1)*k+q;
			ans+=1;
			cout<<ans<<endl;
		}
	}
}