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
		string s;
		cin>>s;
		ll o1=0,e1=0;
		ll o2=0,e2=0;
		for(i=0;i<n;i++)
		{
			if(i%2==0)
			{
				if(s[i]%2==1)
				o1++;
				else e1++;
			}
			else
			{
				if(s[i]%2==1)
				o2++;
				else e2++;
			}
		}
		ll x=n-1;
		ll p=1;
		while(x--)
		{
			if(p==1)
			{
				if(e1>0) e1--;
				else o1--;
			}
			else
			{
				if(o2>0) o2--;
				else e2--;
			}
			p*=-1;
		}
		if(o1 or o2)
		cout<<1<<endl;
		else cout<<2<<endl;
	}
}