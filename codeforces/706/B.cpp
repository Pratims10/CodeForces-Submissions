#include<bits/stdc++.h>
using namespace std;
#define ll int
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,q,i,x,j,k;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	sort(ar,ar+n);
	cin>>q;
	ll size=ar[n-1]+1;
	ll ans[size];
	ll ctr=0;
	for(i=0;i<size;i++)
	{
		if(ar[ctr]==i)
		{
			ll temp=ar[ctr];
			while(temp==ar[ctr]&&ctr<n)
			ctr++;
		///	if(ctr!=n)
		//	ctr--;
		}
		ans[i]=ctr;
	}
	/*for(i=0;i<size;i++)
	cout<<ans[i]<<' ';
	cout<<endl;*/
	while(q--)
	{
		cin>>x;
		if(x>=ar[n-1])
		cout<<n<<endl;
		else
		cout<<ans[x]<<endl;
	}
}