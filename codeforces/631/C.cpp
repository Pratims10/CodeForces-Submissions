#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
typedef struct val{
	ll t,r,ind;
};
bool srt(val a,val b)
{
	if(a.r==b.r) return a.ind>b.ind;
	return a.r>b.r;
}
bool srt1(ll a,ll b)
{
	return a>b;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>n>>m;
	ll ar[n];
	ll ans[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		ans[i]=ar[i];
	}
	val node[m];
	for(i=0;i<m;i++)
	{
		cin>>j>>k;
		node[i].ind=i;
		node[i].t=j;
		node[i].r=k;
	}
	sort(node,node+m,srt);
	vector<val> v;
	v.push_back(node[0]);
	for(i=1;i<m;i++)
	{
		if(node[i].ind>v[v.size()-1].ind)
		{
			v.push_back(node[i]);
		}
	}
	sort(ans,ans+v[0].r);
	ll l=0,r=v[0].r-1;
	ll ctr=r;
	for(i=1;i<v.size();i++)
	{
		ll el=abs(v[i].r-v[i-1].r);
		if(v[i-1].t==1)
		{
			while(el>0)
			{
				ar[ctr--]=ans[r--];
				el--;
			}
		}
		else
		{
			while(el>0)
			{
				ar[ctr--]=ans[l++];
				el--;
			}
		}
	}
	if(v[v.size()-1].t==1)
	{
		while(r>=l)
		{
			ar[ctr--]=ans[r--];
		}
	}
	else
	{
		while(l<=r)
		{
			ar[ctr--]=ans[l++];
		}
	}
	for(i=0;i<n;i++)
	cout<<ar[i]<<' ';
}