#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,d;
	cin>>t;
	while(t--)
	{
		cin>>n;
		string s[n];
		for(i=0;i<n;i++)
		cin>>s[i];
		ll r1[10],r2[10];
		ll c1[10],c2[10];
		for(i=0;i<10;i++)
		{
			r1[i]=r2[i]=c1[i]=c2[i]=-1;
		}
		map<ll,ll> mp;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				ll x=s[i][j]-'0';
				mp[x]++;
				if(r1[x]==-1) r1[x]=i;
				r2[x]=max(r2[x],i);
				if(c1[x]==-1) c1[x]=j;
				else c1[x]=min(c1[x],j);
				c2[x]=max(c2[x],j);
			}
		}
		/*
		for(i=0;i<10;i++)
		cout<<c1[i]<<' ';
		cout<<endl;
		for(i=0;i<10;i++)
		cout<<c2[i]<<' ';
		cout<<endl;
		*/
		for(ll v=0;v<=9;v++)
		{
			if(!mp[v])
			{
				cout<<0<<' ';
				continue;
			}
			ll ans=0;
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					ll x=s[i][j]-'0';
					if(x!=v) continue;
					//cout<<"i="<<i<<' '<<"j"<<j<<endl;
					ll a=max(i,n-1-i);
					ll b=max(abs(j-c1[v]),abs(j-c2[v]));
					ans=max(ans,a*b);
					//cout<<a<<' '<<b<<endl;
					
					a=max(j,n-1-j);
					b=max(abs(i-r1[v]),abs(i-r2[v]));
					ans=max(ans,a*b);
					//cout<<a<<' '<<b<<endl;
				}
			}
			cout<<ans<<" ";
		}
		cout<<endl;
	}
}