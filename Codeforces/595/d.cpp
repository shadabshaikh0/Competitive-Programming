#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int
ll cnt=0;
ll DFSUtil1(ll u, vector<ll> adj[], vector<bool> &visite,ll c,vector<ll> &ans) 
{ 
    visite[u] = true;
    c++;
    for (ll i=0; i<adj[u].size(); i++) 
    {
        if (visite[adj[u][i]] == false) 
        {
            ans[adj[u][i]]=ans[u];
            c+=DFSUtil1(adj[u][i], adj, visite,c,ans);
        }
    }
    return c;
} 
void DFS1(vector<ll> adj[], ll V,vector<ll> &ans) 
{ 
    vector<bool> visite(V, false); 
    int prev=0;
    for (ll u=0; u<V; u++) 
    {
        if (visite[u] == false) 
        {
            DFSUtil1(u, adj, visite,0,ans); 
        }
    }
}
ll DFSUtil(ll u, vector<ll> adj[], vector<bool> &visited,ll c) 
{ 
    visited[u] = true; c++;
    for (ll i=0; i<adj[u].size(); i++) 
    {
        if (visited[adj[u][i]] == false) 
        {
            c+=DFSUtil(adj[u][i], adj, visited,0);
        }
    }
    return c;
} 
  
void DFS(vector<ll> adj[], ll V) 
{ 
    vector<bool> visited(V, false); 
    int prev=0;
    vector<ll>ans(V,0);
    for (ll u=0; u<V; u++) 
    {
        	if (visited[u] == false) 
            {
                ans[u]=DFSUtil(u, adj, visited,0); 
            }
            ll t=0;
            prev=t;
        }
        DFS1(adj,V,ans);
        for(ll i=0;i<V;i++)
        	cout<<ans[i]<<" ";
} 
      
int main() 
{ 
    ll t;
    cin>>t;
    while(t--){
        ll n,m=0;
        cin>>n;
        vector<ll>a[n];
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];

        for(ll i=0;i<n;i++)
        {
            ll k,b;
            a[i].push_back(arr[i]-1);  
            a[arr[i]-1].push_back(i); 
        } 	
        ll set=0;
        DFS(a,n);
        cout<<"\n";
    }
}