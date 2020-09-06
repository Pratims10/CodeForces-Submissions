#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		string s;
		cin>>s;
		bool f=true;
		for(i=0;i<k;i++)
		{
			ll a=0,b=0;
			j=i;
			while(j<n)
			{
				if(s[j]=='1') a=1;
				if(s[j]=='0') b=1;
				j+=k;
			}
			if(a>0 and b>0)
			f=false;
			else if(a>0)
			{
				j=i;
				while(j<n)
				{
					s[j]='1';
					j+=k;
				}
			}
			else if(b>0)
			{
				j=i;
				while(j<n)
				{
					s[j]='0';
					j+=k;
				}
			}
		}
		if(!f)
		cout<<"NO\n";
		else
		{
			ll o=0,z=0;
			for(i=0;i<k;i++)
			if(s[i]=='0') z++;
			else if(s[i]=='1') o++;
			f=true;
			if(z>k/2 or o>k/2)
			f=false;
			for(i=k;i<n;i++)
			{
				if(s[i]=='1') o++;
				else if(s[i]=='0') z++;
				if(s[i-k]=='0') z--;
				else if(s[i-k]=='1') o--;
				if(z>k/2 or o>k/2)
					f=false;
			}
			if(f)
			cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
}