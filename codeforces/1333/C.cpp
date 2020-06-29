#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	ll ar[n+1];
	ll p[n+1]={0};
	for(i=1;i<=n;i++)
	cin>>ar[i];
	for(i=1;i<=n;i++)
	p[i]=p[i-1]+ar[i];
	set<ll> st;
	st.insert(0);
	j=0;
	ll ans=0;
	for(i=0;i<=n;i++)
	{
		j++;
		while(j<=n and st.find(p[j])==st.end())
		{
			st.insert(p[j]);
			j++;
		}
		j--;
	//	cout<<i<<' '<<j<<endl;
		ans+=j-i;
		st.erase(p[i]);
	}
	cout<<ans;
}