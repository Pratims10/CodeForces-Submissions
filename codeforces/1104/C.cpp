#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,i,j,k,ctr=0;
	string str;
	cin>>str;
	ll l=str.length();
	ll a=1,b=1;
	for(i=0;i<l;i++)
	{
		if(str[i]=='0')
		{
			cout<<1<<' '<<a++<<endl;
			if(a==5)
			a=1;
		}
		else
		{
			cout<<3<<' '<<b<<endl;
			if(b==1)
			b=3;
			else
			b=1;
		}
	}
}