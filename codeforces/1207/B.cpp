#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,m,t,i,j,k,ans,p,f,h,c;
	cin>>n>>m;
	ll ar[n][m],b[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>ar[i][j];
			b[i][j]=0;
		}
	}
	vector<pair<ll,ll> > vect;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<m-1;j++)
		{
			if(ar[i][j]==1&&b[i][j]==0)
			{
	//			cout<<"o\n";
				vect.push_back(make_pair(i+1,j+1));
				b[i][j]=1;
				b[i][j+1]=1;
				b[i+1][j]=1;
				b[i+1][j+1]=1;
			}
			else if(ar[i][j]==1&&b[i][j]==1&&ar[i+1][j]==1 && ar[i+1][j+1]&&ar[i][j+1]==1)
			{
				vect.push_back(make_pair(i+1,j+1));
				b[i][j]=1;
				b[i][j+1]=1;
				b[i+1][j]=1;
				b[i+1][j+1]=1;
			}
		}
//		cout<<ar[i][j]<<' '<<i<<' '<<j<<endl;
		if(ar[i][j]==1&&b[i][j]==0)
		{
			vect.push_back(make_pair(i+1,j));
				b[i][j]=1;
				b[i][j-1]=1;
				b[i+1][j]=1;
				b[i+1][j-1]=1;
		}
	}
	for(i=0;i<m;i++)
	{
		if(ar[n-1][i]==1&&b[n-1][i]==0)
		{
			vect.push_back(make_pair(n-1,i+1));
				b[n-1][i]=1;
				b[n-2][i]=1;
				b[n-1][i+1]=1;
				b[n-2][i+1]=1;
		}
	}
	bool flg=true;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(ar[i][j]!=b[i][j])
			{
	//			cout<<i<<' '<<j<<endl;
				flg=false;
			}
		}	
	}
	if(flg==false)
	cout<<-1;
	else
	{
		n=vect.size();
		cout<<vect.size()<<endl;
//		vector<ll> iterator it;
	//	for(it=vect.begin();it!=vect.end();i++)
		for(i=0;i<n;i++)
		cout<<vect[i].first<<' '<<vect[i].second<<endl;
	}
}