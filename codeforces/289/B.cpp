//polo penguin
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll val(ll [],ll,ll);
int main()
{
	ll ans=0,m,n,i,d,j,k;
	cin>>n>>m>>d;
	ll ar[m*n],md[m*n];
	for(i=0;i<m*n;i++)
	{
		cin>>ar[i];
	}
	sort(ar,ar+m*n);
	j=ar[0];
	for(i=0;i<m*n;i++) ar[i]-=j;
	bool flg=true;
	for(i=0;i<m*n;i++)
	{
		if(ar[i]%d==0)
		ans+=ar[i];
		else
		{
			flg=false;
			break;
		}
	}
	if(!flg)
	cout<<-1<<endl;
	else
	{
		ans/=m*n;
		for(i=0;i<m*n;i++)
		{
			if(ans<ar[i])
			break;
		}
		--i;
		ll x=val(ar,i,m*n);
		if(i+1<n)
		x=min(x,val(ar,i+1,m*n));
		if(i-1>=0)
		x=min(x,val(ar,i-1,m*n));
		for(i=0;i<m*n;i++)
		{
			x=min(x,val(ar,i,m*n));
		}
		cout<<x/d;
	}
}
ll val(ll ar[],ll pos,ll n)
{
	ll s=0;
	for(ll i=0;i<n;i++)
	{
		s+=abs(ar[i]-ar[pos]);
	}
	return s;
}