#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		ll ctr=0;
		if(a%2==1) ctr++;
		if(b%2==1) ctr++;
		if(c%2==1) ctr++;
		if(d%2==1) ctr++;
		if(ctr<=1)
		cout<<"Yes\n";
		else
		{
			ll mn=min(a,min(b,c));
			if(mn==0)
			cout<<"No\n";
			else
			{
				a-=1;
				b-=1;
				c-=1;
				d+=3;
				ll o=0;
				if(a%2==1) o++;
				if(b%2==1) o++;
				if(c%2==1) o++;
				if(d%2==1) o++;
				if(o<=1)cout<<"Yes\n";
				else cout<<"No\n";
			}
		}
	}
}