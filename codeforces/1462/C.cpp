#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		bool f=false;
		ll ans=LLONG_MAX;
		for(i=0;i<pow(2, 11);i++)
		{
			bitset<10> bset(i);
			ll s=0;
			for(j=1;j<10;j++)
			{
				if(bset.test(j))
				s+=j;
			}
			ll x1=0;
			ll ctr1=1;
			for(j=1;j<10;j++)
			{
				if(bset.test(j))
				x1+=ctr1*j,ctr1*=10;
			}
			if(s==n)
			{
				ll x=0;
				ll ctr=1;
				string ss;
				for(j=1;j<10;j++)
				{
					if(bset.test(j))
					ss+=(char)(j+'0');
				}
				sort(ss.begin(), ss.end());
				x=stoll(ss);
				ans=min(ans,x);
				f=true;
			}
		}
		if(f)
		cout<<ans<<"\n";
		else cout<<"-1\n";
	}
}