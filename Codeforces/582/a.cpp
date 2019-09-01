#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll oc=0,ec=0;
    for( ll i=0;i<n;i++ ){
        cin>>v[i];
        if( v[i] & 1 )
            oc++;
        else
            ec++;
    }   
    cout<<min(oc,ec)<<"\n";        
	return 0;
}