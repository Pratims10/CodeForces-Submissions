#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=1e9+7;
ll power(ll x,ll n)
{
	if(n<0)
	return 0;
	if(n==0)
	return 1;
	ll y=power(x,n/2);
	y*=y;
	y%=mod;
	if(n%2==1)
	{
		y*=x;
		y%=mod;
	}
	return y;
}
ll sumOfSubstrings(string str)
{
    ll n = str.length();
    ll sod[n];
    ll ctr=0;
    sod[0] = str[0]-'0';
    ll res = max(sod[0],1ll)*power(10,n-1);
    res%=mod;
    for (ll i = 1; i < n; i++)
	{
        ll stri = str[i]-'0';
        ll x=(10 * sod[i - 1]%mod)%mod;
        sod[i] = ((i + 1)%mod * stri%mod)%mod + x;
        sod[i]%=mod;
        if(str[i]=='0')
        ctr++;
        ll y=sod[i]+ctr;
        y*=power(10,n-1-i);
        y%=mod;
        res+=y;
        res%=mod;
    }  
    return res;
}
int main()
{
	ll i,j,k,m,n,t;
	string s;
	cin>>s;
	n=s.length();
	ll sum=0;
	ll ctr=0;
	ll x=0;
	for(i=n-1;i>=0;i--,ctr++)
	{
		ll pw=0;
		if(i!=n-1)
		pw=power(10,ctr-1)*ctr;
		pw%=mod;
		x+=pw;
		ll y=i*(i+1)/2;
		y*=power(10,n-1-i);
		y%=mod;
		sum+=y*(s[i]-'0');
		sum%=mod;
		sum+=x*(s[i]-'0');
		sum%=mod;
		//cout<<x<<' '<<y<<endl;
	}
	cout<<sum;
}