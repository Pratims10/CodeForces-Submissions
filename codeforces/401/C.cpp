#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,z,o;
	cin>>z>>o;
	if(o>2*z+2 || z>o+1)
	{
		cout<<-1;
		return 0;
	}
	if(z>=o)
	{
		string s;
		for(i=0;i<o;i++)
		{
			s+='0';
			s+='1';
		}
		if(z==o+1)
		s+='0';
		cout<<s;
		return 0;
	}
	string s;
	for(i=0;i<z;i++)
	{
		s+="1";
		s+='0';
		o--;
		//cout<<s<<endl;
	}
	if(o>0)
	{
		s+='1';
		o--;
	}
	i=0;
	while(o>0)
	{
		s[i]='2';
		o--;
		i+=2;
	}
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='2') cout<<"11";
		else cout<<s[i];
	}
}