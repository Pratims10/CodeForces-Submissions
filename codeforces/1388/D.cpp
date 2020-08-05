#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n;
list<ll> adj[200001];
ll ar[200001],b[200001];
ll indeg[200001];
vector<ll> pos,neg;
void dfs()
{
	list<ll> Q;
	for(ll i=0;i<n;i++)
	if(indeg[i]==0)
	Q.push_back(i);
	ll ans=0;
	while(!Q.empty())
	{
		ll q=Q.front();
		Q.pop_front();
		ans+=ar[q];
		//cout<<q<<' '<<ar[q]<<'\n';
		if(ar[q]<0)
		{
			neg.push_back(q);
		}
		else
		{
			pos.push_back(q);
			ar[b[q]]+=ar[q];
		}
		for(auto x:adj[q])
		{
			indeg[x]--;
			if(indeg[x]==0)
			Q.push_back(x);
		}
	}
	cout<<ans<<endl;
	for(auto x:pos)
	cout<<x+1<<' ';
	reverse(neg.begin(),neg.end());
	for(auto y:neg)
	cout<<y+1<<" ";
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll i,j,k,m,t;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>ar[i];
	for(i=0;i<n;i++)
	{
		cin>>j;
		b[i]=j-1;
		if(j!=-1)
		{
			adj[i].push_back(j-1);
			indeg[j-1]++;
		}
	}
	dfs();
}