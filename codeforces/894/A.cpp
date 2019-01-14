#include<bits/stdc++.h>
using namespace std;
#define ll int
int main()
{
	ll n,sum=0,i,j,ans=0;
	string s;
	cin>>s;
	ll l=s.length();
	for(i=0;i<l-1;i++)
	{
		if(s[i]=='Q')
		sum++;
		else if(s[i]=='A')
		{
			ll ctr=0;
			for(j=l-1;j>=i;j--)
			if(s[j]=='Q')
			ctr++;
			ans+=ctr*sum;
		}
	}
	cout<<ans;
}