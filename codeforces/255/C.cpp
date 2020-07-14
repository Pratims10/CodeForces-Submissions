#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll merge(vector<ll> &a,vector<ll> &b)
{
	ll ctr=1,i=0,j=0,n=a.size(),m=b.size();
	//cout<<n<<' '<<m;
	while(i<n and j<m)
	{
		if(a[i]<b[j])
		{
			while(i<n and a[i]<b[j])
			i++;
			ctr++;
		}
		else
		{
	//		cout<<"S";
			while(j<m and b[j]<a[i])
			j++;
			ctr++;
		}
	}
	return ctr;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	ll ar[n],b[n];
	for(i=0;i<n;i++)
	cin>>ar[i],b[i]=ar[i];
	sort(b,b+n);
	ll ctr=1;
	map<ll,ll> mp;
	for(i=0;i<n;i++)
	{
		if(!mp[b[i]])
		mp[b[i]]=ctr++;
	}
	k=mp.size();
	for(i=0;i<n;i++)
	ar[i]=mp[ar[i]];
	//mapping done
	vector<ll> v[k+1];
	for(i=0;i<n;i++)
	{
		v[ar[i]].push_back(i);
	}
	//pos array formed
	ll ans=0;
	for(i=1;i<=k;i++)
	{
		ll qq=v[i].size();
		ans=max(ans,qq);
		for(j=i+1;j<=k;j++)
		{
			ans=max(ans,merge(v[i],v[j]));
		}
	}
	cout<<ans<<endl;
}