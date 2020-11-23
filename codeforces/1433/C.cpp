#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n];
		ll mx=0,mxpos;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			if(mx<ar[i])
			{
				mx=ar[i];
				mxpos=i;
			}
		}
		ll ctr=0,ans;
		for(i=0;i<n;i++)
		if(mx==ar[i])
		ctr++;
		if(ctr==n)
		cout<<-1<<'\n';
		else
		{
			for(i=0;i<n;i++)
			if(ar[i]==mx)
			{
				if(i==0 and ar[i+1]!=mx)
				{
					ans=i+1;
					break;
				}
				else if(i==n-1 and ar[i-1]!=mx)
				{
					ans=i+1;
					break;
				}
				else if(i!=0 and i!=n-1 and (ar[i+1]!=mx or ar[i-1]!=mx))
				{
					ans=i+1;
					break;
				}
			}
			cout<<ans<<'\n';
		}
	}
}