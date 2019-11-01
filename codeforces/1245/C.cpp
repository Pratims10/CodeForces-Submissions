#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	m=1000000007;
	ll ar[100001];
	ar[0]=ar[1]=1;
	for(i=2;i<=100000;i++)
	ar[i]=(ar[i-1]%m+ar[i-2]%m)%m;
	string s;
	cin>>s;
	n=s.length();
	ll ans=1;
	for(i=0;i<n;i++)
	{
		ll ctr=0;
		char ch=s[i];
//		cout<<ch;
		if(s[i]!='u'&&s[i]!='n')
		continue;
		while(i<n && s[i]==ch)
		{
			i++;
			ctr++;
		}
		i--;
		ll x=ar[ctr];
//		cout<<ctr<<endl;
		ans=(ans%m*x%m)%m;
	}
	bool flag=false;
	for(i=0;i<n;i++)
	if(s[i]=='m'||s[i]=='w')
	flag=true;
	if(!flag)
	cout<<ans%m<<endl;
	else cout<<0;
}