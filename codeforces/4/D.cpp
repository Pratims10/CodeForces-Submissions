#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool srt(pair<pair<ll,ll>,ll> a,pair<pair<ll,ll>,ll> b)
{
	return a.first.first<b.first.first;
}
int main()
{
	ll i,j,k,m,n,w,h;
	cin>>n>>w>>h;
	vector<pair<pair<ll,ll>,ll> > v,ar;
	for(i=0;i<n;i++)
	{
		cin>>j>>k;
		v.push_back({{j,k},i});
	}
	sort(v.begin(),v.end(),srt);
	for(i=0;i<n;i++)
	{
		if(w<v[i].first.first && h<v[i].first.second)
		ar.push_back(v[i]);
	}
	n=ar.size();
	if(n==0)
	{
		cout<<0;
		return 0;
	}
	ll dp[n]={0};
	for(i=0;i<n;i++)
	dp[i]=1;
	ll pos[n];
	for(i=0;i<n;i++)
	pos[i]=-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(ar[j].first.first<ar[i].first.first && ar[j].first.second<ar[i].first.second)
			{
				if(dp[i]<dp[j]+1)
				{
					dp[i]=dp[j]+1;
					pos[i]=j;
				}
			}
		}
	}
	ll mx=0,mxpos=-1;
	for(i=0;i<n;i++)
	{
		if(mx<dp[i])
		{
			mx=dp[i];
			mxpos=i;
		}
	}
	cout<<mx<<endl;
	vector<ll> ans;
	ans.push_back(ar[mxpos].second+1);
	i=mxpos;
	while(pos[i]!=-1)
	{
		i=pos[i];
		ans.push_back(ar[i].second+1);
	}
	for(i=ans.size()-1;i>=0;i--)
	cout<<ans[i]<<' ';
}