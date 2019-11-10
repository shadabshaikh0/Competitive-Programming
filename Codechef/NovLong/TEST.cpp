#include<bits/stdc++.h>
#define ll long long int 
#define ld long double 
#define FOR(i,a,b) for( ll i=(a) ; i<=(b) ; ++i)
#define FORR(i,a,b) for( ll i=(a) ; i>=(b) ; --i)
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

struct point{
    ll x,y;
};

ld finddist( point a,point b ){
    ld dist = sqrt( (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) );    
    return dist;
}

int main()
{
	bolt;
	ll t;
	cin>>t;
	while(t--){
        ll x,y;
        cin>>x>>y;

		ll n,m,k;
		cin>>n>>m>>k;

        vector< point > first(n);
        vector< point > second(m);
        vector< point > last(k);

        ll i;
        for( i=0;i<n;i++ ){
            cin>>first[i].x;
            cin>>first[i].y;
        }
        for( i=0;i<m;i++ ){
            cin>>second[i].x;
            cin>>second[i].y;
        }
        for( i=0;i<k;i++ ){
            cin>>last[i].x;
            cin>>last[i].y;
        }

        vector<ld> distfirst(n,0);
        vector<ld> distsecond(m,INT_MAX);
        vector<ld> distlast(k,INT_MAX);
        
        point start = {x,y};
        for( ll i=0;i<n;i++ ){
            distfirst[i] = finddist( start,first[i] );
        }

        for( ll i=0;i<m;i++ ){
            for( ll j=0;j<n;j++ ){
                distsecond[i] = min( distsecond[i],finddist( second[i],first[j] ) + distfirst[j] );
            }
        }

        for( ll i=0;i<k;i++ ){
            for( ll j=0;j<m;j++ ){
                distlast[i] = min( distlast[i],finddist( second[j],last[i] ) + distsecond[j]  );
            }
        }

        ld mindistance1 = *min_element( distlast.begin(),distlast.end() );



        distfirst.resize(m,0);
        distsecond.resize(n,INT_MAX);
        fill( distlast.begin(),distlast.end(),INT_MAX);

        
        for( ll i=0;i<m;i++ ){
            distfirst[i] = finddist( start,second[i] );
        }

        for( ll i=0;i<n;i++ ){
            for( ll j=0;j<m;j++ ){
                distsecond[i] = min( distsecond[i],finddist( second[j],first[i] ) + distfirst[j] );
            }
        }

        for( ll i=0;i<k;i++ ){
            for( ll j=0;j<n;j++ ){
                distlast[i] = min( distlast[i],finddist( first[j],last[i] ) + distsecond[j]  );
            }
        }

        ld mindistance2 = *min_element( distlast.begin(),distlast.end() );

        cout<< fixed<< setprecision(10)<< min( mindistance1,mindistance2)  <<"\n";

	}
	return 0;   
}