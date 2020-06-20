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
		if(n==1)
		cout<<"FastestFinger\n";
		else if(n%2==1 or n==2)
		cout<<"Ashishgup\n";
		else
		{
			ll ctr=0,f=0;
			vector<ll> v;
			ll q=n;
			for(i=2;i*i<=n;i++)
			{
				if(n%i!=0) continue;
				if(n/i==i)
				{
					if(i%2) ctr++,v.push_back(i);
					f++;
				}
				else
				{
					if(i%2) ctr++,v.push_back(i);;
					ll x=n/i;
					if(x%2) ctr++,v.push_back(x);;
					f+=2;
				}
			}
			if(ctr>0)
			{
				if(f-ctr>1)
				cout<<"Ashishgup\n";
				else cout<<"FastestFinger\n";
			}
			else
			{
				cout<<"FastestFinger\n";
			}
		}
	}
}