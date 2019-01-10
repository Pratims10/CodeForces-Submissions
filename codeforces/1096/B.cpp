#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll m= 998244353;
int main()
{
	ll i,j,k,c1=0,c2=0,l;
	cin>>k;
	string s;
	cin>>s;
	l=s.length();
	char c=s[0];
	for(i=0;i<l;i++)
	if(s[i]==c)
	c1++;
	else
	break;
	c=s[l-1];
	for(i=l-1;i>=0;i--)
	if(s[i]==c)
	c2++;
	else
	break;
	if(k==2)
	{
		cout<<3<<endl;
		return 0;
	}
	if(c1==l)
	{
		ll ans=(c1*(c1+1))/2;
		ans=ans%m;
		cout<<ans<<endl;
	}
	else
	{
		if(s[0]!=s[l-1])
		cout<<(c1+c2+1)%m<<endl;
		else
		cout<<(((c1+1)%m)*((c2+1)%m))%m<<endl;
	}
}