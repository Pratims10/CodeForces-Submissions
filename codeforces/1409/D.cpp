#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll sod(ll n)
{
	ll s=0;
	while(n>0)
	{
		s+=n%10;
		n/=10;
	}
	return s;
}
string itos(ll n)
{
	string s;
	while(n>0)
	{
		s+=(char)(n%10+'0');
		n/=10;
	}
	reverse(s.begin(),s.end());
	return s;
}
int main()
{
	ll i,j,k,m,n,t,s;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str>>s;
		n=stoll(str);
		ll ctr=0,p=1;
		ll pos=str.length()-1;
		while(sod(n)>s)
		{
			//cout<<n<<' '<<str<<endl;
			//cout<<"s";
			if(str[pos]=='0')
			{
				pos--;
				p*=10;
				continue;
			}
			ll x=10-(str[pos--]-'0');
			ctr+=p*x;
			n+=p*x;
			str=itos(n);
			p*=10;
		}
		cout<<ctr<<endl;
	}
}