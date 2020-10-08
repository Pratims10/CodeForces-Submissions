#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	string s[n];
	for(i=0;i<n;i++)
	cin>>s[i];
	bool ans=true;
	list<ll> adj[26];
	ll indegree[26]={0};
	bool nodes[26]={0};
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<s[i].length() and j<s[i+1].length();j++)
		{
			if(s[i][j]!=s[i+1][j])
			{
				ll a=s[i][j]-'a';
				ll b=s[i+1][j]-'a';
				adj[a].push_back(b);
				indegree[b]++;
				nodes[a]=1;
				nodes[b]=1;
				break;
			}
		}
		if(j==s[i].length() or j==s[i+1].length())
		{
			if(s[i].length()>s[i+1].length())
			ans=false;
		}
	}
	if(!ans)
	{
		cout<<"Impossible\n";
		return 0;
	}
	list<ll> q;
	for(i=0;i<26;i++)
	if(indegree[i]==0)
	q.push_back(i);
	string str;
	bool vis[26]={0};
	while(!q.empty())
	{
		ll x=q.front();
		q.pop_front();
		str+=(char)(x+'a');
		vis[x]=1;
		for(auto i:adj[x])
		{
			indegree[i]--;
			if(indegree[i]==0)
			q.push_back(i);
		}
	}
	for(i=0;i<26;i++)
	{
		if(nodes[i] and !vis[i])
		ans=false;
	}
	if(!ans)
	{
		cout<<"Impossible\n";
		return 0;
	}
	cout<<str;
	for(i=0;i<26;i++)
	{
		if(!vis[i])
		cout<<(char)(i+'a');
	}
}