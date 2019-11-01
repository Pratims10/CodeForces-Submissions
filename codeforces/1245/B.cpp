#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		ll a,b,c;
		cin>>n;
		cin>>a>>b>>c;
		string s;
		cin>>s;
		ll l=s.length();
		ll ctr=0;
		char ch[n+1];
		for(i=0;i<n;i++)
		ch[i]='a';
		ch[n]='\0';
		for(i=0;i<l;i++)
		{
			if(s[i]=='R')
			{
				if(b>0)
				{
					b--;
					ch[i]='P';
					ctr++;
				}
			}
			else if(s[i]=='P')
			{
				if(c>0)
				{
					c--;
					ch[i]='S';
					ctr++;
				}
			}
			else 
			{
				if(a>0)
				{
					a--;
					ch[i]='R';
					ctr++;
				}
			}
		}
//		cout<<a<<' '<<b<<' '<<c<<endl;
		if(ctr>=ceil(n/2.0))
		{
			cout<<"YES\n";
			for(i=0;i<n;i++)
			{
				if(ch[i]=='a')
				{
					if(a>0)
					{
						cout<<'R';
						a--;
					}
					else if(b>0)
					{
						cout<<'P';
						b--;
					}
					else
					{
						cout<<'S';
						c--;
					}
				}
				else cout<<ch[i];
			}
			cout<<endl;
		}
		else cout<<"NO\n";
	}
}