#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i,j,temp;
	cin>>n>>k;
	int K=k;
	vector <pair<int,int> >ar;
	int ans[n]={0};
	int freq[10000]={0};
	for(i=0;i<n;i++)
	{
		//cout<<"CS";
		cin>>temp;
		freq[temp]++;
		ar.push_back(make_pair(temp,i) );
	}
	sort(ar.begin(),ar.end());
	//cout<<"SD";
	k=1;
	for(i=0;i<n;i++)
	{
		//cout<<ar[i].first<<' ';
		temp=ar[i].first;
		while(temp==ar[i].first&&i<n)
		{
			ans[ar[i].second]=(k++)%K;
			ans[ar[i].second]++;
			i++;
		}
		i--;
	}
	bool flag=true;
	for(i=0;i<6000;i++)
	if(freq[i]>K)
	{
		flag=false;
		break;
	}
	if(flag)
	{
		cout<<"YES\n";
		for(i=0;i<n;i++)
		cout<<ans[i]<<' ';
		cout<<endl;
	}
	else
	cout<<"NO\n";
}