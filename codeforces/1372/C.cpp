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
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			ar[i]--;
		}
		ll prev=-1;
		ll mx[n];
		mx[0]=ar[0];
		for(i=1;i<n;i++)
		mx[i]=max(mx[i-1],ar[i]);
		ll ans=0;
		i=n-1;
		bool srt=true;
		for(j=prev+1;j<i;j++)
		if(ar[j+1]<ar[j])
		srt=false;
		if(srt)
		{
			prev=i;
		}
		else
		{
			ll ctr=0;
			ll l=0,r=n-1;
			for(i=0;i<n;i++)
			if(ar[i]!=i) {
				l=i;
				break;
			}
			for(i=n-1;i>=0;i--)
			{
				if(ar[i]!=i){
					r=i;
					break;
				}
			}
			for(j=l;j<=r;j++)
			if(ar[j]==j) ctr++;
			if(ctr)
			ans+=2;
			else ans++;
			prev=i;
		}
		cout<<ans<<endl;
	}
}