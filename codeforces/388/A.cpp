#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=1e9+7;
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++) cin>>ar[i];
	sort(ar,ar+n);
	bool vis[n];
	memset(vis,false,sizeof(vis));
	ll ans=0;
	while(true)
	{
		bool flag=false;
		ll pos=0;
		for(i=0;i<n;i++)
		{
			if(!vis[i])
			{
				if(ar[i]>=pos)
				{
					vis[i]=true;
					//cout<<"D";
					flag=true;
					pos++;
				}
			}
		}
		if(flag) ans++;
		else break;
	}
	cout<<ans;
}