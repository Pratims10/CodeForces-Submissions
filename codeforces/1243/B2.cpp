#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>k;
	while(k--)
	{
		string s1,s2;
		cin>>n;
		cin>>s1>>s2;
		ll freq[26];
		for(i=0;i<26;i++)
		freq[i]=0;
		for(i=0;i<n;i++)
		{
			freq[s1[i]-97]++;
			freq[s2[i]-97]++;
		}
		bool flag=true;
		for(i=0;i<26;i++)
		if(freq[i]%2==1)
		flag=false;
		if(!flag)
		cout<<"NO\n";
		else
		{
			cout<<"Yes\n";
			vector<pair<ll,ll> > v;
			for(i=0;i<n;i++)
			{
				if(s1[i]!=s2[i])
				{
					char ch=s1[i];
					ll pos=-1;
					for(j=i+1;j<n;j++)
					if(s1[j]==ch)
					{
						pos=j;
						break;
					}
					if(pos!=-1)
					{
						swap(s2[i],s1[pos]);
						v.push_back({pos,i});
					}
					else
					{
						for(j=i+1;j<n;j++)
						if(s2[j]==ch)
						{
							pos=j;
							break;
						}
						if(pos!=-1)
						{
							swap(s1[pos],s2[pos]);
							swap(s2[i],s1[pos]);
							v.push_back({pos,pos});
							v.push_back({pos,i});
						}
					}
				}
			}
			ll xy=v.size();
			cout<<xy<<endl;
			for(i=0;i<xy;i++)
			cout<<v[i].first+1<<' '<<v[i].second+1<<endl;
		}
	}
}