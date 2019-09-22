#include<bits/stdc++.h>
#define ll long long int 
#define ld long double
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
	ll t;
	cin>>t;
	while(t--){
        ll c,m,x;
        cin>>c>>m>>x;
        if( c == 0 || m == 0 )
            cout<<0<<"\n";
        else{
            ll g=0,e=x;
            g = min( c,m );
            e +=  ( max( c,m ) - g);          

            ll diff = 0,minus=0;
            if( g > e ){
                diff = g-e;
                minus = ceil( (ld)diff/(ld)3);
            }
            cout<<g-minus<<"\n";
        }
	}
	return 0;
}