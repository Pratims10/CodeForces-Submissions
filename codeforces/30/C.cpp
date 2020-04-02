#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ld dp[1001][1001];
typedef struct node{
	ld x,y,t;
	ld p;
};

ll n;
node ar[1001];
bool srt(node a,node b)
{
	return a.t<b.t;
}
ld func(ll i,ll prv)
{
	if(i==n+1)
	return 0.0;
	if(dp[i][prv]!=-1)
	return dp[i][prv];
	ld ret=0;
//	if(prv==0)
//	{
//		ret=max(ar[i].p+func(i+1,i),func(i+1,prv));
//	}
//	else
	{
		ld dist=sqrt((ar[i].x-ar[prv].x)*(ar[i].x-ar[prv].x) + (ar[i].y-ar[prv].y)*(ar[i].y-ar[prv].y));
		if(dist<=abs(ar[i].t-ar[prv].t))
		{
			ret=max(ar[i].p+func(i+1,i),func(i+1,prv));
		}
		else
		{
			ret=func(i+1,prv);
		}
	}
	return dp[i][prv]=ret;
}

int main()
{
	ll i,j,k;
	cout<<setprecision(10);
	cin>>n;
	ar[0].x=ar[0].y=ar[0].p=0;
	ar[0].t=99999999999999;
	for(i=1;i<=n;i++)
	cin>>ar[i].x>>ar[i].y>>ar[i].t>>ar[i].p;
	sort(ar+1,ar+n+1,srt);
	for(i=0;i<=1000;i++)
	{
		for(j=0;j<=1000;j++)
		dp[i][j]=-1.0;
	}
	ld xx=0.0;
	xx=max(xx,func(1,0));
	cout<<xx;
}