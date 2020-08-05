#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll i,j,k,m,t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		string s;
		cin>>s;
		ll ar[n]={0};
		ll ctr=0;
		for(i=0;i<n;i++)
		{
			if(i>0)
			{
				if(s[i]!=s[i-1])
				{
					if(s[i-1]=='1')ctr++;
					else ctr--;
				}
			}
			if(s[i]=='0')
			ar[i]=--ctr;
			else ar[i]=++ctr;
		}
		ll ans=n+1;
		for(i=0;i<n;i++)
		ans=min(ans,ar[i]);
		if(ans<1)
		for(i=0;i<n;i++)
		{
			ar[i]+=(1-ans);
		}
		ans=0;
		for(i=0;i<n;i++)
		ans=max(ans,ar[i]);
		cout<<ans<<endl;
		for(i=0;i<n;i++)
		cout<<ar[i]<<' ';
		cout<<endl;
	}
}
/*
6
20
11110001111101000000
*/