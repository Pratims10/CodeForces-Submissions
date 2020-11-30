#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dist(ll x1,ll y1,ll x2,ll y2)
{
	return abs(x1-x2)+abs(y1-y2);
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ll ar[n];
		for(i=0;i<n;i++)
		cin>>ar[i];
		ll ans=n-1;
		for(i=1;i<=100;i++)
		{
			ll ctr=0;
			for(j=0;j<n;j++)
			{
				if(ar[j]==i) continue;
				else
				{
					ctr++;
					j+=k-1;
				}
			}
			ans=min(ans,ctr);
		}
		cout<<ans<<'\n';
	}
}