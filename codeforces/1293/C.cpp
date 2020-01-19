#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,s,t;
	cin>>n>>t;
	map<pair<ll,ll>,ll> mp;
	ll ctr=0;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		if(!mp[{a,b}])
		{
			mp[{a,b}]++;
			if(b==1)
			{
				if(a==2)
				{
					if(mp[{1,2}])
					ctr++;
				}
			}
			else if(b==n)
			{
				if(a==1)
				{
					if(mp[{2,n-1}])
					ctr++;
				}
			}
			else if(a==1)
			{
				if(mp[{2,b}])
				ctr++;
				if(mp[{2,b+1}])
				ctr++;
				if(mp[{2,b-1}])
				ctr++;
			}
			else if(a==2)
			{
				if(mp[{1,b}])
				ctr++;
				if(mp[{1,b+1}])
				ctr++;
				if(mp[{1,b-1}])
				ctr++;
			}
		}
		else
		{
			mp[{a,b}]=0;
			if(b==1)
			{
				if(a==2)
				{
					if(mp[{1,2}])
					ctr--;
				}
			}
			else if(b==n)
			{
				if(a==1)
				{
					if(mp[{2,n-1}])
					ctr--;
				}
			}
			else if(a==1)
			{
				if(mp[{2,b}])
				ctr--;
				if(mp[{2,b+1}])
				ctr--;
				if(mp[{2,b-1}])
				ctr--;
			}
			else if(a==2)
			{
				if(mp[{1,b}])
				ctr--;
				if(mp[{1,b+1}])
				ctr--;
				if(mp[{1,b-1}])
				ctr--;
			}
		}
		if(ctr==0)
		cout<<"Yes\n";
		else cout<<"No\n";
	}
}