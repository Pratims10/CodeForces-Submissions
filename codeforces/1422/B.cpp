#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll ar[n][m];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			cin>>ar[i][j];
		}
		ll i=0,j=n-1;
		ll ans=0;
		while(i<j)
		{
			for(k=0;k<m/2;k++)
			{
				ll a,b,c,d;
				a=ar[i][k];
				b=ar[i][m-k-1];
				c=ar[j][k];
				d=ar[j][m-k-1];
				ll x=a+b+c+d;
				x/=4;
				ll d1=abs(x-a)+abs(x-b)+abs(x-c)+abs(x-d);
				x+=1;
				ll d2=abs(x-a)+abs(x-b)+abs(x-c)+abs(x-d);
				d2=min(d1,d2);
				x=a;
				d1=abs(x-a)+abs(x-b)+abs(x-c)+abs(x-d);
				d2=min(d1,d2);
				x=b;
				d1=abs(x-a)+abs(x-b)+abs(x-c)+abs(x-d);
				d2=min(d1,d2);
				x=c;
				d1=abs(x-a)+abs(x-b)+abs(x-c)+abs(x-d);
				d2=min(d1,d2);
				x=d;
				d1=abs(x-a)+abs(x-b)+abs(x-c)+abs(x-d);
				d2=min(d1,d2);
				ans+=d2;
			}
			i++;
			j--;
		}
		if(n%2==1)
		{
			for(k=0;k<m/2;k++)
			{
				ll a,b;
				a=ar[n/2][k];
				b=ar[n/2][m-k-1];
				ll x=(a+b)/2;
				ll d1=abs(x-a)+abs(x-b);
				++x;
				ll d2=abs(x-a)+abs(x-b);
				d2=min(d1,d2);
				x=a;
				d1=abs(x-a)+abs(x-b);
				d2=min(d1,d2);
				x=b;
				d1=abs(x-a)+abs(x-b);
				d2=min(d1,d2);
				ans+=d2;
			}
		}
		if(m%2==1)
		{
			for(k=0;k<n/2;k++)
			{
				ll a,b;
				a=ar[k][m/2];
				b=ar[n-k-1][m/2];
				ll x=(a+b)/2;
				ll d1=abs(x-a)+abs(x-b);
				++x;
				ll d2=abs(x-a)+abs(x-b);
				d2=min(d1,d2);
				x=a;
				d1=abs(x-a)+abs(x-b);
				d2=min(d1,d2);
				x=b;
				d1=abs(x-a)+abs(x-b);
				d2=min(d1,d2);
				ans+=d2;
			}
		}
		cout<<ans<<endl;
	}
}