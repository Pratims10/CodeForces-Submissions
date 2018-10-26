#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t,i,n,s=0,temp,ctr=0,size=0,ans=0;
	cin>>n>>t;
	ll ar[n];
	ll min=1000000000000000009;
	for(i=0;i<n;i++)
	{
		cin>>temp;
		if(temp<=t)
		{
			ar[size++]=temp;
			s+=temp;
		}
		if(min>temp)
		min=temp;
	}
	if(size==0)
	{
		cout<<0<<endl;
		return 0;
	}
	ans=(t/s)*size;
	t=t%s;
	//cout<<t<<' '<<ans;
	//cout<<ans<<' '<<t;
	while(t>=min)
	{
		ctr=s=0;
		ll T=t;
		for(i=0;i<size;i++)
		{
			if(t-ar[i]<0)
			continue;
			t-=ar[i];
			ans++;
			if(T>=ar[i]){
			ar[ctr++]=ar[i];
			s+=ar[i];
			}
		//	cout<<t<<' ';
		}
		size=ctr;
		ll x=(t/s)*size;
		ans+=x;
		t%=s;
	}
	cout<<ans<<endl;
}