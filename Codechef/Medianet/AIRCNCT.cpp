#include<bits/stdc++.h>
#define ll long long int 
#define ld long double 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef pair<int, int> iPair; 
using namespace std;
struct DS 
{ 
	int n; 
	int *pappa, *rank; 
	DS(int n) 
	{ 
		this->n = n; 
		pappa = new int[n+1];rank = new int[n+1]; 
		for (int i = 0; i <= n; i++) 
		{ 
			rank[i] = 0; pappa[i] = i; 
		} 
	} 
	void merge(int x, int y) 
	{ 
		x = find(x), y = find(y); 
		if (rank[x] > rank[y]){ 
			pappa[y] = x; 
		}
		else{ 
			pappa[x] = y; 
		}

		if (rank[x] == rank[y]) 
		{	
			rank[y]++; 
		}
	} 
	int find(int u) 
	{ 
		if (u != pappa[u]) 
			pappa[u] = find(pappa[u]); 
		return pappa[u]; 
	} 
}; 


struct Graph 
{ 
	int V, E; 
	vector< pair<ld, iPair> > edges; 
	Graph(int V, int E) 
	{ 
		this->V = V; 
		this->E = E; 
	} 
	void add(int x, int y, ld w) 
	{ 
		edges.push_back( { w ,{ x,y } }  );
	} 
	ld MST();
}; 

ld Graph::MST(){
		ld wt = 0;
		sort(edges.begin(), edges.end()); 
		DS ds(V); 
		vector< pair<ld, iPair> >::iterator it; 
		for (it=edges.begin(); it!=edges.end(); it++) 
		{ 
			int x = it->second.first; 
			int y = it->second.second; 

			int setx = ds.find(x); 
			int sety = ds.find(y); 

			if (setx != sety) 
			{ 
				wt += it->first; 
				ds.merge(setx, sety); 
			} 
		} 
		return wt; 
}

int main() 
{
	bolt;
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector< pair<ll,ll> > v( n );
		for( ll i=0;i<n;i++ ){
			ll x,y;
			cin>>x>>y;
			v[i] = make_pair( x,y );
		}
    
        ll V = n;
        ll E = n*(n+1)/2;
        Graph g(V,E); 
        for( ll i=0;i<n;i++ ){
            for( ll j=0;j<n;j++ ){
                if( i != j ){
                    
                    if( ( (v[i].first == v[j].first) && (  abs(v[i].second - v[j].second) == 1 )   )    ||  ( (v[i].second == v[j].second) && (  abs(v[i].first - v[j].first) == 1 )   )  )  {
                        g.add(i,j,0);
                    }
                    else{
        				ld distance =  sqrt(  (  v[i].first - v[j].first   )* (  v[i].first - v[j].first   ) + (  v[i].second - v[j].second   )* (  v[i].second - v[j].second   )   );
                        g.add(i,j,distance);
                    }
                }
            }
        }
        ld mst_wt = g.MST(); 
        cout<<mst_wt<<"\n";
    }
	return 0; 
} 
