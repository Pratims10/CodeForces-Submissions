#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,m,i,j,k,temp;
	cin>>n>>m;
	ll freq[n+1]={0};
	ll ctr=1;
	ll ans[m];
	set<ll,greater<ll> > s;
	for(i=0;i<m;i++)
	{
		cin>>temp;
		freq[temp]++;
		s.insert(temp);
		if(s.size()==n)
		{
			cout<<1;
			for(j=0;j<=n;j++)
			{
				freq[j]--;
				if(freq[j]==0)
				{
			//		cout<<' '<<j<<' ';
					set<ll>::iterator it;
					it=s.find(j);
					s.erase(it);
				}
			}
		}
		else
		cout<<0;
	}
}