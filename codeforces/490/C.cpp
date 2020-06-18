#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll power(ll y,ll x,ll mod)
{
	if(x==0) return 1;
	if(x%2==1)
	{
		ll a=power(y,x/2,mod);
		a=a*a;
		a%=mod;
		a*=y;
		return a%mod;
	}
	else
	{
		ll a=power(y,x/2,mod);
		a=a*a;
		a%=mod;
		return a;
	}
}
int main()
{
	ll i,j,k,m,n,t,x,y;
	string s;
	cin>>s;
	n=s.length();
	cin>>x>>y;
	ll ar[n],b[n];
	ar[0]=s[0]-'0';
	ar[0]%=x;
	b[n-1]=s[n-1]-'0';
	b[n-1]%=y;
	for(i=1;i<n;i++)
	{
		ar[i]=ar[i-1]*10+(s[i]-'0');
		ar[i]%=x;
	}
	for(i=n-2;i>=0;i--)
	{
		b[i]=(b[i+1]+((s[i]-'0')*power(10,n-1-i,y))%y)%y;
	}
	if(s[0]=='0'){
		cout<<"NO";
		return 0;
	}
	for(i=0;i<n-1;i++)
	{
		if(ar[i]==0 and b[i+1]==0 and s[i+1]!='0')
		{
			cout<<"YES\n";
			for(j=0;j<=i;j++) cout<<s[j];
			cout<<endl;
			for(j=i+1;j<n;j++) cout<<s[j];
			return 0;
		}
	}
	cout<<"NO";
}