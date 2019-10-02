#include<bits/stdc++.h>
#define ll int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

struct Myteam {
    ll index; 
    ll data[5];
};

bool playmatch( struct Myteam &a, struct Myteam &b ){
    
    ll first = 0,second =0;
    for( ll i=0;i<5;i++ ){
        if(  a.data[i] == b.data[i] ){
            if( a.index < b.index )
                first++;
            else
                second++;
        }
        else if( a.data[i] > b.data[i] )
            first++;
        else
            second++;
    }
    return ( first > second );
}

ll tourwinner( vector< vector<ll> > &Strength ){
    ll n = Strength.size();
    vector< Myteam > team(n);
    for( ll i=0;i<n;i++ ){
        team[i].index = i+1;
        for( ll j=0;j<5;j++ ){
            team[i].data[j] = Strength[i][j];
        }
    }
    ll len = n + n -1  ;
    vector<ll> segtree(len);
    ll cnt = 0;
    for( ll i=n;i<=len;i++ ){
        segtree[i] = cnt++;
    }
    ll s = n;
    ll e = len;
    while( s > 0 ){
        for( ll i=s;i<=e;i+=2  ){
            if( playmatch(  team[ segtree[i] ] , team[ segtree[i+1] ] ) ){
                segtree[i>>1] = segtree[i];
            }
            else{
                segtree[i>>1] = segtree[i+1];
            }
        }
        e = s - 1;
        s >>= 1;
    }
    return segtree[0]+1;
}

int main()
{
	bolt;
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
        vector< vector<ll> > Strength( n,vector<ll>(5) );
        for( ll i=0;i<n;i++ ){
            for( ll j=0;j<5;j++ ){
                cin>>Strength[i][j];
            }
        }
        cout<<tourwinner( Strength )<<"\n";
    }
	return 0;
}