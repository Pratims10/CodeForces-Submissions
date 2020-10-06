#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i,j,x,y,ans;
	cin>>n;
	string s;
	cin>>s;
	int req,c0=0,c1=0,c2=0;
	for(i=0;i<n;i++)
	{
		if(s[i]=='0')
		c0++;
		else if(s[i]=='1')
		c1++;
		else c2++;
	}
	req=n/3;
	i=0;
	if(c0>req)
	{
		for(i=n-1;i>=0 && c0>req;i--)
		{
			if(s[i]=='0' and c2<req)
			{
				s[i]='2';
				c0--;c2++;
			}
		}
		for(i=n-1;i>=0 and c0>req;i--)
		{
			if(s[i]=='0' && c1<req)
			{
				s[i]='1';
				c0--;c1++;
			}
		}
	}
	if(c2>req)
	{
		for(i=0;i<n and c2>req;i++)
		{
			if(s[i]=='2'&&c0<req)
			{
				s[i]='0';
				c2--;
				c0++;
			}
		}
		for(i=0;i<n and c2>req;i++)
		{
			if(s[i]=='2'&&c1<req)
			{
				s[i]='1';
				c2--;
				c1++;
			}
		}
	}
	if(c1>req)
	{
		for(i=0;i<n&&c1>req;i++)
		{
			if(s[i]=='1'&&c0<req)
			{
				s[i]='0';
				c0++;c1--;
			}
		}
		for(i=n-1;i>=0 and c1>req;i--)
		{
			if(s[i]=='1'&&c2<req)
			{
				s[i]='2';
				c1--;
				c2++;
			}
		}
	}
	cout<<s<<endl;
}