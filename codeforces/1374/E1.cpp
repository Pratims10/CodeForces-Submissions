#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n>>k;
	vector<ll> a,b,c;
	for(i=0;i<n;i++)
	{
		ll p,q,r;
		cin>>p>>q>>r;
		if(q==1 and r==1)
		c.push_back(p);
		else if(q==1 and r==0)
		a.push_back(p);
		else if(q==0 and r==1) b.push_back(p);
	}
	ll ca=0,cb=0,cc=0;
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	sort(c.begin(),c.end());
	if(min(b.size(),a.size())+c.size()<k)
	{
		cout<<-1;
		return 0;
	}
	ll ans=0;
	while(k--)
	{
		if(ca<a.size() and cb<b.size() and cc<c.size())
		{
			if(a[ca]+b[cb]>c[cc])
			ans+=c[cc++];
			else
			{
				ans+=a[ca]+b[cb];
				ca++;
				cb++;
			}
		}
		else
		{
			if(cc>=c.size())
			{
				ans+=a[ca]+b[cb],ca++,cb++;
			}
			else
			{
				ans+=c[cc++];
			}
		}
	}
	cout<<ans;
}