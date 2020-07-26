
// Problem : D. Anti-Sudoku
// Contest : Codeforces - Codeforces Round #634 (Div. 3)
// URL : https://codeforces.com/contest/1335/problem/D
// Memory Limit : 256 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		string s[9];
		for(i=0;i<9;i++)
		cin>>s[i];
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			if(s[i][j]=='3') s[i][j]='4';
		}
		for(i=0;i<9;i++)
		cout<<s[i]<<endl;
	}
}