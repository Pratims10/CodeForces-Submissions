#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t,i,j,k,ans,b,p,f,h,c;
	cin>>t;
	while(t--)
	{
		cin>>b>>p>>f;
		cin>>h>>c;
		if(2*(p+f)<=b)
		{
			ans=p*h+f*c;
		}
		else
		{
			b/=2;
			if(c>h)
			{
				ans=min(b,f)*c;
				b-=min(b,f);
				ans+=min(b,p)*h;
			}
			else
			{
				ans=min(b,p)*h;
				b-=min(b,p);
				ans+=min(b,f)*c;
			}
		}
		cout<<ans<<endl;
	}
}