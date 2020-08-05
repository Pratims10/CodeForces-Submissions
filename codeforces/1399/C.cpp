#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll i,j,k,m,t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n],b[n];
		for(i=0;i<n;i++)
		cin>>ar[i];
		map<ll,ll> mp;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			mp[ar[i]+ar[j]]=1;
		}
		ll ans=0;
		for(auto x:mp)
		{
			ll s=x.first;
			bool vis[n];
			memset(vis,false,sizeof(vis));
			ll ctr=0;
			for(i=0;i<n;i++)
			{
				if(vis[i]) continue;
				for(j=i+1;j<n;j++)
				if(!vis[j] and ar[i]+ar[j]==s)
				{
					vis[i]=true;
					vis[j]=true;
					ctr++;
					break;
				}
			}
			ans=max(ans,ctr);
		}
		cout<<ans<<endl;
	}
}