#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,a,b,c,ha,hb,hc,aa,ab,ac,da,db,dc;
	cin>>ha>>aa>>da;
	cin>>hb>>ab>>db;
	cin>>hc>>ac>>dc;
	ll ans=INT_MAX;
	//for(i=0;i<=500;i++)
	{
		for(j=0;j<=500;j++)
		{
			for(k=0;k<=500;k++)
			{
				ll cost=j*ac+k*dc;
				aa+=j;
				da+=k;
				ll x=max(aa-db,0ll);
				if(x>0)
				{
					ll y=max(ab-da,0ll);
					if(y==0) ans=min(ans,cost);
					else
					{
						ll b=ceil((hb*1.0)/(1.0*(aa-db)));
						ll a=ha-b*(ab-da);
						if(a>0) ans=min(ans,cost);
						else
						ans=min(ans,cost- --a*hc);
					}
				}
				aa-=j;
				da-=k;
			}
		}
	}
	cout<<ans;
}