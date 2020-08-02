
// Problem : B. Binary Period
// Contest : Codeforces - Educational Codeforces Round 86 (Rated for Div. 2)
// URL : https://codeforces.com/contest/1342/problem/B
// Memory Limit : 256 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		ll z=0,o=0;
		ll n=s.length();
		for(i=0;i<n;i++)
		{
			if(s[i]=='0')
				z++;
			else
				o++;
		}
		if(o==0||z==0)
		cout<<s<<endl;
		else
		{
			string s1;
			s1+=s[0];
			ll pos=0;
			for(i=1;i<n;i++)
			{
				if(s1[pos]==s[i])
				{
					if(s[i]=='0')
						s1+='1';
					else
						s1+='0';
					++pos;
				}
				s1+=s[i];
				++pos;
			}
			cout<<s1<<endl;
		}
	}
}