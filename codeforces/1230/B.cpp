#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
int main()
{
	ll i,j,k,m,n,t,a,b,c,d;
	cin>>n>>k;
	ll ctr=0;
	string s;
	cin>>s;
	if(k==0)
	{
		cout<<s<<endl;
		return 0;
	}
	if(n==1)
	{
		cout<<"0";
		return 0;
	}
	if(n==1&&k==0&&s[0]=='0')
{
		s="0";
		cout<<s;
	return 0;
}
	if(s[0]!='1')
	{
		s[0]=48+1;
		ctr++;
	}
	if(k==0)
	{
		cout<<s;
		return 0;
	}
//	cout<<ctr<<endl;
	for(i=1;i<n;i++)
	{
		if(ctr>=k)
		break;
		if(s[i]!=48)
		{
			ctr++;
			s[i]=48+0;
		}
//		cout<<ctr<<' '<<k<<endl;
	}
	if(n==1&&k==1)
	s="0";
	
	cout<<s<<endl;
}