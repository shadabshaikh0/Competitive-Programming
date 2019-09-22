#include<bits/stdc++.h>
#define ll unsigned long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll maxe = 0;
    for( ll i=0;i<n;i++ ){
        cin>> v[i];
        maxe = max( maxe,v[i] );
    }

    vector<ll> temp;
    for( ll i=0;i<n;i++ ){
        if( maxe - v[i] > 0 )
            temp.push_back( maxe - v[i] );
    }

    ll gcdans = temp[0];
    for( ll i=1;i<temp.size();i++){
        gcdans = __gcd( gcdans,temp[i] );
    }
    ll count = 0;
    for( ll i=0;i<temp.size();i++ ){
        count += ( temp[i] / gcdans );
    }
    cout<<count<<" "<<gcdans<<"\n";

	return 0;
}