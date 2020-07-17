#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,a,b,c;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		if(a!=b and a!=c and b!=c)
		cout<<"NO\n";
		else if(a==b and b==0)
		{
			cout<<"YES\n";
			cout<<a<<' '<<a<<' '<<a<<endl;
		}
		else
		{
			ll x,y;
			map<ll,ll> mp;
			mp[a]++;
			mp[b]++;
			mp[c]++;
			x=max(a,max(b,c));
			y=min(a,min(b,c));
			if(mp[x]==1)
			cout<<"NO\n";
			else
			{
				cout<<"YES\n";
				if(a==y)
				cout<<y<<' '<<y<<' '<<x<<endl;
				else if(b==y)
				cout<<x<<' '<<y<<' '<<y<<endl;
				else
				cout<<y<<' '<<x<<' '<<y<<endl;
			}
		}
	}
}