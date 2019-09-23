#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
int main()
{
	ll i,j,k,m,n,t,a,b,c,d;
	cin>>n>>m;
	vector<pair<ll,ll> > ar;
	ll deg[n+1]={0};
	for(i=0;i<m;i++)
	{
		cin>>j>>k;
		ar.push_back(make_pair(j,k));
		deg[j]++;
		deg[k]++;
	}
//	sort(deg,deg+n);
	if(n<=6)
	{
		cout<<m;
		return 0;
	}
	if(m==0||m==1)
	{
		cout<<m;
		return 0;
	}
	ll pos=0,mindeg=deg[1];
	//cout<<mindeg<<"d\n";
	for(i=1;i<n;i++)
	{
		if(mindeg>deg[i])
		{
	//		cout<<i<<' ';
			mindeg=deg[i];
			pos=i;
		}
	}
	pos++;
	ll ans=0;
	for(ll pr=1;pr<=7;pr++)
	{
		pos=pr;
		for(i=1;i<=7;i++)
		{
			if(i==pos)
			continue;
			vector<pair<ll,ll> > ar2;
			for(j=0;j<m;j++)
			{
				ll u,v;
				if(ar[j].first==pos)
				u=i;
				else u=ar[j].first;
				if(ar[j].second==pos)
				v=i;
				else v=ar[j].second;
				if(u>v)
				swap(u,v);
				ar2.push_back(make_pair(u,v));
			}
			sort(ar2.begin(),ar2.end());
	/*		for(j=0;j<m;j++)
			cout<<ar2[j].first<<ar2[j].second<<" ";
			cout<<endl;*/
			ll ctr=1;
			ll u=ar2[0].first;
			ll v=ar2[0].second;
			for(j=1;j<m;j++)
			{
			//	cout<<ar2[i].first<<" "<<ar2[i].second<<endl;
				if(u==ar2[j].first&&v==ar2[j].second)
				{
					continue;
				}
				ctr++;
				u=ar2[j].first;
				v=ar2[j].second;
			}
			ans=max(ans,ctr);
		}
	}
	cout<<ans<<endl;
}