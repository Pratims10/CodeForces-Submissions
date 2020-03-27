#include<bits/stdc++.h>
using namespace std;
#define ll long long int
list<ll> adj[200001];
ll dep[200001],par[200001],tin[200001],tout[200001];
ll T=0;
bool vis[200001];
void dfs(ll x)
{
    vis[x]=true;
    tin[x]=T++;
    for(auto i: adj[x]){
        if(!vis[i])
        {
            par[i]=x;
            dep[i]=dep[x]+1;
            dfs(i);
        }
    }
    tout[x]=T++;
}
int main()
{
    ll i,j,k,m,n;
    cin>>n>>m;
    for(i=0;i<n-1;i++)
    {
        cin>>j>>k;
        j--;k--;
        adj[j].push_back(k);
        adj[k].push_back(j);
    }
    par[0]=-1;
    dep[0]=0;
    for(i=0;i<n;i++)
        vis[i]=false;
    dfs(0);
    while(m--)
    {
        ll fv=0;
        cin>>k;
        ll ar[k];
        for(i=0;i<k;i++)
        {
            cin>>ar[i];
            ar[i]--;
            if(dep[ar[i]]>dep[fv])
                fv=ar[i];
        }
        bool flag=true;
        for(i=0;i<k;i++)
        {
            ar[i]=par[ar[i]];
  //          cout<<ar[i]<<' ';
            if(ar[i]!=-1)
            {
                if(tin[ar[i]]<=tin[fv] and tout[ar[i]]>=tout[fv])
                {

                }
                else {
//                    cout<<'f'<<ar[i]<<' '<<tin[ar[i]]<<' '<<fv<<' '<<tin[fv]<<endl;
                    flag=false;
                    break;
                }
            }
        }
        if(flag)
            cout<<"YES\n";
        else cout<<"NO\n";
    }
}
