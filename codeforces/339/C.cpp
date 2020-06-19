#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string str;
ll n,dp[1001][21][11];
ll func(ll ind,ll diff,ll prv)
{
	if(ind==n) return dp[ind][diff+10][prv]=1;
	if(dp[ind][diff+10][prv]!=-1) return dp[ind][diff+10][prv];
	ll mx=0;
	for(ll i=0;i<10;i++)
	{
		if(str[i]=='1' and i+1!=prv)
		{
			if(ind%2==0 and (diff+i+1)>0){
				mx=max(mx,func(ind+1,diff+i+1,i+1));
				//if(ind==2)	cout<<ind+1<<' '<<diff+i+1<<' '<<i+1<<"\t\t"<<func(ind+1,diff+i+1,i+1)<<endl;
			}
			else if(ind%2==1 and diff-1-i<0) mx=max(mx,func(ind+1,diff-i-1,i+1));
		}
	}
	//if(ind==2) cout<<mx<<endl;
	return dp[ind][diff+10][prv]=mx;
}
vector<ll> ans;
void printop(ll ind,ll diff,ll prv)
{
	if(ind==n) return;
	for(ll i=0;i<10;i++)
	{
		if(ind%2==0)
		{
			//if(ind==2) cout<<ind+1<<' '<<diff+i+1<<' '<<i+1<<"\t"<<dp[ind+1][diff+i+1][i+1]<<endl;
			if(dp[ind+1][diff+i+1+10][i+1]==1 and i+1!=prv)
			{
				ans.push_back(i+1);
				//cout<<ind<<endl;
				printop(ind+1,diff+i+1,i+1);
				break;
			}
		}
		else
		{
			if(dp[ind+1][diff-i-1+10][i+1]==1 and i+1!=prv)
			{
				ans.push_back(i+1);
				//cout<<ind<<endl;
				printop(ind+1,diff-i-1,i+1);
				break;
			}
		}
	}
}
int main()
{
	ll i,j,k,m;
	cin>>str;
	cin>>n;
	for(i=0;i<=1000;i++)
	{
		for(j=0;j<=20;j++){
			for(k=0;k<=10;k++)
			dp[i][j][k]=-1;
		}
	}
	ll x=func(0,0,0);
	if(x==1)
	{
		//cout<<'d'<<dp[1][1][1]<<"d\n";
		cout<<"YES\n";
		printop(0,0,0);
		for(auto q:ans)
		cout<<q<<' ';
	}
	else cout<<"NO\n";
}