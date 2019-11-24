#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define pairr pair<ll,ll>

void doBFS(ll node, vector< vector< pairr> > &graph,vector<ll> &coloredges,vector<bool> &visited ){
    queue<ll> q;
    ll colors = 0;
    set<ll> donecolored;
    if( visited[node] )  return;

    visited[node] = true;
    for( ll i=0;i< graph[node].size();i++ ){
        if(  coloredges[  graph[node][i].second  ] != -1  ){
            donecolored.insert( graph[node][i].second  );
        }
    }   

    for( ll i=0;i< graph[node].size();i++ ){
        if( !visited[ graph[node][i].first ] ){
            q.push( graph[node][i].first  );
        }

        if( coloredges[ graph[node][i].second ] == -1 ){
            while( donecolored.find( colors ) != donecolored.end()  ){
                colors++;
            }
            coloredges[ graph[node][i].second ] = colors;
            donecolored.insert(colors);
            colors++;
        }
    }
    while (!q.empty()) { 
        ll nextnode = q.front(); 
        q.pop();  
        doBFS(nextnode, graph, coloredges, visited); 
    } 
    return;
}


int main()
{
	bolt;
	ll n;
	cin>>n;
    vector< vector< pairr> > graph(n);  
    vector<ll> coloredges(n-1,-1);
    vector<bool> visited(100001,false);

    for( ll i=0;i<n-1;i++ ){
        ll x,y;
        cin>>x>>y;
        x--,y--;
        graph[x].push_back( make_pair( y,i ) );
        graph[y].push_back( make_pair( x,i ) );
    }

    doBFS( 0,graph,coloredges,visited );
    for( ll i=0;i<n-1;i++ ){
        cout<<coloredges[i]+1<<"\n";
    }
	return 0;
}