#include<bits/stdc++.h>
#define ll long long int 
#define ld long double
#define FOR(i,a,b) for( ll i=(a) ; i<=(b) ; ++i)
#define FORR(i,a,b) for( ll i=(a) ; i>=(b) ; --i)
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
    ll n;
    cin>>n;
    vector<ll> v(n);
    vector<ll> b(n,0);
    ll o =0;
    for( ll i=0;i<n;i++ ){
        cin>>v[i];
        if( v[i]&1 )
            o++;        
    }	
    ll first = o/2;
    for( ll i=0;i<n;i++ ){
        if( v[i] & 1 ){
            if( first != 0 ){
                b[i] = ceil( (ld)v[i]/(ld)2);
                first--;
            }
            else{
                b[i] = floor( (ld)v[i]/(ld)2);                
            }
        }
        else{
            b[i] = v[i] / 2;            
        }
    }
    for( auto it:b ){
        cout<<it<<" ";
    }
    cout<<"\n";

	return 0;
}