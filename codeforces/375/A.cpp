#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	string s;
	cin>>s;
	n=s.length();
	ll f[10]={0};
	for(i=0;i<n;i++)
	f[s[i]-48]++;
	f[1]--;
	f[6]--;
	f[8]--;
	f[9]--;
	ll q=0;
	for(i=1;i<10;i++)
	q+=f[i];
	if(q==0)
	{
		cout<<"1869";
		while(f[0]>0)
		{
			cout<<0;
			f[0]--;
		}
		return 0;
	}
	ll x=0;
	string s1;
	for(i=9;i>=0;i--)
	{
		while(f[i]>0)
		{
			x=(x*10+i)%7;
			s1+=(char)(i+'0');
			f[i]--;
		}
	}
	x*=10000;
	x%=7;
	x=7-x;
	if(x==0 or x==7) s1+="1869";
	else if(x==1) s1+="1968";
	else if(x==2) s1+="1689";
	else if(x==3) s1+="6198";
	else if(x==4) s1+="1698";
	else if(x==5) s1+="1986";
	else if(x==6) s1+="1896";
	cout<<s1;
}