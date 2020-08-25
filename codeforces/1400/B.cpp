#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		ll p,f,cs,cw,s,w;
		cin>>p>>f;
		cin>>cs>>cw;
		cin>>s>>w;
		ll x,cnt;
		if(s<w)
		{
			cnt=p/s+f/s;
			cnt=min(cnt,cs);
			ll mx=0;
			for(i=0;i<=cnt;i++)
			{
				if(i*s<=p and (cnt-i)*s<=f)
				{
					ll p1=p-i*s;
					ll f1=f-(cnt-i)*s;
					ll ctr=p1/w+f1/w;
					ctr=min(ctr,cw);
					mx=max(mx,cnt+ctr);
				}
			}
			cout<<mx<<endl;
		}
		else
		{
			cnt=p/w+f/w;
			cnt=min(cnt,cw);
			ll mx=0;
			for(i=0;i<=cnt;i++)
			{
				if(i*w<=p and (cnt-i)*w<=f)
				{
					ll p1=p-i*w;
					ll f1=f-(cnt-i)*w;
					ll ctr=p1/s+f1/s;
					ctr=min(ctr,cs);
					mx=max(mx,cnt+ctr);
				}
			}
			cout<<mx<<endl;
		}
	}
}