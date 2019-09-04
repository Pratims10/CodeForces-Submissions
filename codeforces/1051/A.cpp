#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		ll l=s.length();
		ll lo=0,up=0,dig=0;
		for(i=0;i<l;i++)
		{
			if(s[i]>=97&&s[i]<=122)
			lo++;
			else if(s[i]>=65&&s[i]<=90)
			up++;
			else
			dig++;
		}
		if(lo>=1&&up==0&&dig==0)
		{
			s[0]='A';
			s[1]='1';
		}
		else if(lo==0&&up>=1&&dig==0)
		{
			s[0]='a';
			s[1]='1';
		}
		else if(lo==0&&up==0&&dig>=1)
		{
			s[0]='a';
			s[1]='A';
		}
		else if(lo>=1&&up>=1&&dig==0)
		{
			if(lo>1)
			{
				for(i=0;i<l;i++)
				if(s[i]>=97&&s[i]<=122)
				{
					s[i]='1';
					break;
				}
			}
			else
			{
				for(i=0;i<l;i++)
				if(s[i]>=65&&s[i]<=90)
				{
					s[i]='1';
					break;
				}
			}
		}
		else if(lo>=1&&dig>=1&&up==0)
		{
			if(lo>1)
			{
				for(i=0;i<l;i++)
				if(s[i]>=97&&s[i]<=122)
				{
					s[i]='A';
					break;
				}
			}
			else
			{
				for(i=0;i<l;i++)
				if(s[i]>=48&&s[i]<=57)
				{
					s[i]='A';
					break;
				}
			}
		}
		else if(lo==0&&up>=1&&dig>=1)
		{
			if(up>1)
			{
				for(i=0;i<l;i++)
				if(s[i]>=65&&s[i]<=90)
				{
					s[i]='a';
					break;
				}
			}
			else
			{
				for(i=0;i<l;i++)
				if(s[i]>=48&&s[i]<=57)
				{
					s[i]='a';
					break;
				}
			}
		}
		cout<<s<<endl;
	}
}