#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll i,j,k,m,n,t,d;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n%2==1)
		{
			cout<<-1<<'\n';
			continue;
		}
		vector<ll> v;
		while(v.size()<=2000)
		{
			ll a=2,s=2;
			v.pb(1);
			while(s<=n)
			{
				a*=2;
				s+=a;
				if(s<=n)
				v.pb(0);
				else
				{
					s-=a;
					break;
				}
			}
			n-=s;
			if(n==0 or n%2==1)
			{
				break;
			}
		}
		if(n%2==1)
		cout<<-1<<endl;
		else
		{
			cout<<v.size()<<endl;
			for(auto x:v)
			cout<<x<<' ';
			cout<<endl;
		}
	}
}