#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n];
		ll f[n+1]={0};
		vector<vector<ll>> v(n+1);
		for(i=0;i<=n;i++)
		v[i].push_back(-1);
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			v[ar[i]].push_back(i);
		}
		for(i=0;i<=n;i++)
		v[i].push_back(n);
		ll ans[n+1];
		for(i=0;i<=n;i++)
		ans[i]=INT_MAX;
		for(i=1;i<=n;i++)
		{
			ll mx=0;
			for(j=0;j<v[i].size()-1;j++)
			mx=max(mx,v[i][j+1]-v[i][j]-1);
			//cout<<i<<' '<<mx<<endl;
			ans[mx+1]=min(ans[mx+1],i);
		}
		for(i=1;i<=n;i++)
		{
			ans[i]=min(ans[i],ans[i-1]);
		}
		for(i=1;i<=n;i++)
		if(ans[i]==INT_MAX)
			cout<<-1<<' ';
		else
			cout<<ans[i]<<' ';
		cout<<endl;
	}
}