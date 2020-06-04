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
		ll ar[n];
		set<ll> s;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			s.insert(ar[i]);
		}
		bool flag=false;
		for(i=1;i<1024;i++)
		{
			set<ll> st;
			for(j=0;j<n;j++)
			st.insert(ar[j]^i);
			if(st==s)
			{
				flag=true;
				cout<<i<<endl;
				break;
			}
		}
		if(!flag) cout<<-1<<endl;
	}
}