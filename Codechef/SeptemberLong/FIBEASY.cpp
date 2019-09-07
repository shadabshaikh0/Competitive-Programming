#include<bits/stdc++.h>
#define ll unsigned long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define MAX 60
int main()
{
	bolt;
    vector<ll> v;
    v.push_back(0);
    v.push_back(1);
    for( ll i=2;i<MAX;i++ ){
        v.push_back( ( v[i-1] + v[i-2] ) % 10 );
    }
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll res = 1;
        while( res < n ){
            res = res * 2;
        }
        if( res != n ){
            res = res /2;
        }
        cout<<v[(res-1)%60]<<"\n";
    }
	return 0;
}