#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,m,n,i,j,k;
	cin>>n>>m;
	int ar[n],freq[100001]={0};
	set <int,greater<int> > s;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		s.insert(ar[i]);
		freq[ar[i]]++;
	}
	int ans[n+1];
	int ctr=0;
	//cout<<" "<<s.size()<<endl;
	for(i=0;i<n;i++)
	{
		ans[i+1]=s.size();
		freq[ar[i]]--;
		if(freq[ar[i]]==0){
		set <int>::iterator it;
		it=s.find(ar[i]);
		if(it!=s.end())
		s.erase(it);
		}
	}
	while(m--)
	{
		cin>>i;
		cout<<ans[i]<<endl;
	}
}