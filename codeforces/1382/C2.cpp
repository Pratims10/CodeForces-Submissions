#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	string s1,s2;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>s1>>s2;
		ll l=0,r=n-1;
		ll p=1;
		i=n-1;
		vector<ll> ans;
		while(i>=0)
		{
			char ch;
			if(p==1)
			{
				ch=s1[l++];
			}
			else
			{
				ch=s1[r--];
				if(ch=='0')
				ch='1';
				else
				ch='0';
			}
			p*=-1;
			if(s2[i]==ch)
			ans.push_back(1);
			ans.push_back(i+1);
			i--;
		}
		cout<<ans.size()<<' ';
		for(auto it:ans)
		cout<<it<<' ';
		cout<<'\n';
	}
}