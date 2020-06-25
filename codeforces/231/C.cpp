#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll sum(ll ar[],ll x,ll y)
{
	if(x==0) return ar[y];
	return ar[y]-ar[x-1];
}
int main()
{
	ll i,j,k,m,n,x,t;
	cin>>n>>k;
	ll ar[n],s[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	sort(ar,ar+n);
	s[0]=ar[0];
	for(i=1;i<n;i++)
	s[i]=s[i-1]+ar[i];
	ll mx=0,ans;
	for(i=0;i<n;i++)
	{
		ll l=0,r=i-1,mid,x=i;
		while(l<=r)
		{
			mid=(l+r)/2;
			ll ss=sum(s,mid,i-1);
			ll len=i-1-mid+1;
			ll changes=len*ar[i]-ss;
			if(changes>k) l=mid+1;
			else
			{
				r=mid-1;
				x=min(x,mid);
			}
		}
		ll len=i-x+1;
		if(mx<len)
		{
			mx=len;
			ans=ar[i];
		}
	}
	cout<<mx<<" "<<ans<<endl;
}