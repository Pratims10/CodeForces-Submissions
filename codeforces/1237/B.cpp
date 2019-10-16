#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n;
	cin>>n;
	ll ar[n],f[100001]={0};
	stack<ll> q;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		f[ar[i]]++;
	}
	for(i=n-1;i>=0;i--)
	{
		q.push(ar[i]);
	}
	ll op[n];
	for(i=0;i<n;i++)
	cin>>op[i];
	ll ans=0;
	for(i=0;i<n;i++)
	{
		if(f[q.top()]==0)
		{
	//		cout<<"S";
			q.pop();
			i--;
			continue;
		}
		if(op[i]==q.top())
		q.pop();
		else
		{
		//	cout<<op[i]<<' '<<q.top()<<' ';
		//	cout<<i<<endl;
			ans++;
			f[op[i]]--;
		}
	}
	cout<<ans<<endl;
}