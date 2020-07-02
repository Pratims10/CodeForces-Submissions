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
		string s1,s2;
		cin>>s1>>s2;
		if(s1==s2)
		cout<<"Yes\n";
		else
		{
			vector<pair<char,char> > v;
			for(i=0;i<n;i++)
			{
				if(s1[i]!=s2[i])
				v.push_back({s1[i],s2[i]});
			}
			bool flag=false;
			if(v.size()==2)
			{
				if(v[0].first==v[1].first && v[0].second==v[1].second)
				{
				    cout<<"Yes\n";
				    continue;
			    }
			}
			cout<<"No\n";
		}
	}
}