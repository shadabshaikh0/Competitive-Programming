#include<bits/stdc++.h>
#define ll long long int 
#define forr(i,a,b) for( int i=(a) ; i<=(b) ; ++i)
#define ford(i,a,b) for( int i=(a) ; i>=(b) ; --i)
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
    ll n,m;
    cin>>n>>m;
    vector< vector<bool> > graph( 200,vector<bool>(200,false) );
    forr(i,1,m){
        ll x,y;
        cin>>x>>y;
        graph[x][y] = true;
        graph[y][x] = true;
    }
    if( n <= 6 ){
        cout<<m<<"\n";
    }
    else{
        ll res=INT_MAX;
        forr(i,1,n)
            forr(j,1,n)
            {
                ll k=0;
                forr(u,1,n)
                if(graph[i][u] && graph[u][j]){
                    ++k;
                }
                res= min(res,k);
            }
        cout<< m-res;
    }
    graph.clear();
	return 0;
}