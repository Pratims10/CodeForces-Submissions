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
		ll ar[n];
		map<ll,ll> mp;
		for(i=0;i<n;i++)
		{
			mp[i]=1;
			cin>>ar[i];
		}
		sort(ar,ar+n,srt);
		vector<ll> ans;
		ans.push_back(ar[0]);
		mp[0]=0;
		ll g=ar[0];
		for(i=1;i<n;i++)
		{
			ll mx=0,mxpos;
			for(j=0;j<n;j++)
			{
				if(mp[j])
				{
					ll x=__gcd(g,ar[j]);
					if(mx<x)
					{
						mx=x;
						mxpos=j;
					}
				}
			}
			ans.push_back(ar[mxpos]);
			g=mx;
			mp[mxpos]=0;
		}
		for(auto x:ans)
		cout<<x<<' ';
		cout<<endl;
	}
}