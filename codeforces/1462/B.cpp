#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		string s;
		cin>>s;
		bool f=false;
		for(i=0;i<=4;i++)
		{
			string s1=s.substr(0,i);
			ll rem=4-i;
			ll r=n-1;
			string s2;
			while(rem--)
			{
				s2+=s[r--];
			}
			reverse(s2.begin(),s2.end());
			s1+=s2;
			if(s1=="2020")
			f=true;
		}
		if(f)
		cout<<"YES\n";
		else cout<<"NO\n";
	}
}