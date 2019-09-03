#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,a,b,c,d;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		bool flag=true;
		ll l1=s1.length(),l2=s2.length();
		ll c1=0,c2=0;
		j=0;
		for(i=0;i<l1;)
		{
			c1=c2=0;
			char ch=s1[i];
			while(i<l1 && s1[i]==ch)
			{
				i++;
				c1++;
			}
			while(j<l2 && s2[j]==ch)
			{
				j++;
				c2++;
			}
			if(c2<c1)
			flag=false;
		}
		if(flag&&j==l2)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}