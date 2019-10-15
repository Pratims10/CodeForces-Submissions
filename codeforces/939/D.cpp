#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll root(ll ar[],ll i)
{
	while(i!=-1&&i!=ar[i])
	i=ar[i];
	return i;
}
void join(ll ar[],ll size[],ll i,ll j)
{
	ll ri=root(ar,i);
	ll rj=root(ar,j);
	if(size[ri]<size[rj])
	{
		ar[ri]=rj;
		size[rj]+=size[ri];
	}
	else
	{
		ar[rj]=ri;
		size[ri]+=size[rj];
	}
}
int main()
{
	ll i,j,k,m,n;
	cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	ll size[26]={0},ar[26];
	for(i=0;i<26;i++)
	{
		ar[i]=i;
		size[i]=1;
	}
	vector<pair<char,char> > ans;
	for(i=0;i<n;i++)
	{
		j=s1[i]-97;
		k=s2[i]-97;
		if(root(ar,j)!=root(ar,k))
		{
			ans.push_back({j+97,k+97});
			join(ar,size,j,k);
		}
	}
	cout<<ans.size()<<endl;
	for(i=0;i<ans.size();i++)
	{
		cout<<ans[i].first<<' '<<ans[i].second<<endl;
	}
}