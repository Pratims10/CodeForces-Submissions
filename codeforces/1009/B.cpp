#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n;
	string s;
	cin>>s;
	ll o=0;
	bool t=false;
	ll z=0;
	ll l=s.length();
	for(i=0;i<l;i++)
	{
		if(s[i]=='1')
		o++;
		if(s[i]=='2')
		t=true;
		if(!t)
		{
			if(s[i]=='0')
			z++;
		}
	}
	string str;
	for(i=0;i<z;i++)
		str+='0';
		for(i=0;i<o;i++)
		str+='1';
	if(!t)
	{
		cout<<str;
		return 0;
	}
	for(i=0;i<l;i++)
	if(s[i]=='2')
	break;
	while(i<l)
	{
		t=false;
		z=0;
		while(i<l&&s[i]!='2')
		{
			if(s[i]=='0')
			z++;
			i++;
		}
		for(j=0;j<z;j++)
		str+='0';
		if(s[i]=='2')
		str+='2';
		i++;
	}
	cout<<str;
}