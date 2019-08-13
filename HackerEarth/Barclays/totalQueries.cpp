#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    RD(v,n);	
    for( ll i=0;i<n;i++ ){
        ll x = 0;
        for( ll j = i;j<n;j++ ){
            if( v[j] + x <= k  ){
                x += v[j];              
            }
            else
                break;
        }

        v[ ( i+x )%n ] = k ^ x;
    }

    ll ans = 0; 
    cout<< accumulate( v.begin(),v.end(),ans )<<"\n";
	return 0;
}