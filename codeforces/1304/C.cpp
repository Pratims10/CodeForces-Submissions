#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef struct customer{
	ll t,l,r;
};
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		customer c[n];
		for(i=0;i<n;i++)
		{
			cin>>c[i].t>>c[i].l>>c[i].r;
		}
		ll l=m,r=m;
		bool f=true;
		ll prev=0;
		for(i=0;i<n;i++)
		{
			ll diff=c[i].t-prev;
			prev=c[i].t;
			l-=diff;
			r+=diff;
			if(r<c[i].l or l>c[i].r)
			{
				f=false;
				break;
			}
			l=max(l,c[i].l);
			r=min(r,c[i].r);
		}
		if(f)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}