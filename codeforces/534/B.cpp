//covered path
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll v1,v2,t,d,x,ans=0;
	cin>>v1>>v2;
	cin>>t>>d;
	ll T=t;
	if(v1>v2)
	swap(v1,v2);
	if(d!=0)
	x=(v2-v1)%d;
	if(v1==v2 && T%2==0)
	{
		t/=2;
		cout<<2*(v1*t+d*t*(t-1)/2);
		return 0;
	}	
	ll ar[200];
	ar[0]=v1;
	t--;
	ll i=1;
	while(v1<v2&&t>0)
	{
		v1+=d;
		ar[i++]=v1;
		t--;
	}
	if(t==0)
	ar[i-1]=v2;
	else if(t==1)
	{
		ar[i++]=v2;
	}
	else if(t>=2)
	{
		if(t%2==0)
		{
			ll y=(v2+(t/2)*d);
			while(v1!=y)
			{
				if(v1+x!=y)
				v1+=d;
				else
				v1+=x;
				ar[i++]=v1;
				t--;
			}
			while(t!=0)
			{
				v1-=d;
				ar[i++]=v1;
				t--;
			}
		}
		else
		{
			ll y=(v2+(t/2)*d);
			while(v1!=y)
			{
					if(v1+x!=y)
					v1+=d;
					else
					{
						t--;
						ar[i++]=v1+d;
						v1+=x;
					}
					ar[i++]=v1;
					t--;
			}
			ll cx=0;
			while(t!=0)
			{
				cx++;
				v1-=d;
				ar[i++]=v1;
				t--;
			}
			if(v2!=ar[i-1])
			ans+=cx*d;
		}
	}
	for(ll j=0;j<i;j++)
		ans+=ar[j];
	cout<<ans;
}