#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,n;
	cin>>n;
	string s;
	ll x=500002;
	ll pos[x]={0},neg[x]={0};
	for(i=0;i<n;i++)
	{
		cin>>s;
		ll l=s.length();
		ll ctr=0,p=0,n=0,g=0;
		if(s[0]=='(')
		{
			ctr++;
			p=1;
		}
		else
		{
			ctr--;
			n=1;
		}
		g=ctr;
		ll op=0,cl=0;
		for(j=1;j<l;j++)
		{
			if(s[j]=='(')
			ctr++;
			else
			ctr--;
			if(ctr<0)
			{
				g=-1;
			}
			if(g==-1)
			{
				if(s[j]=='(')
				op++;
				else cl++;
			}
		}
		bool flag=true;
		if(g==-1)
		{
			ll ct=0;
			for(j=l-1;j>=0;j--)
			{
				if(s[j]=='(')
				ct++;
				else ct--;
				if(ct>0)
				{
					flag=false;
					break;
				}
			}
		}
		if(flag)
		{
			if(ctr>=0)
			pos[ctr]++;
			else
			{
				neg[-1*ctr]++;
				//cout<<"d";
			}
		}
	}
	//for(i=0;i<6;i++)
	//cout<<pos[i]<<' '<<neg[i]<<endl;
	ll ans=0;
	ans+=pos[0]/2;
	for(i=1;i<x;i++)
	ans+=min(pos[i],neg[i]);
	cout<<ans<<endl;
}