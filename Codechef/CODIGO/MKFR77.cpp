#include<bits/stdc++.h>
#define ll long long int 
#define FOR(i,a,b) for( int i=(a) ; i<=(b) ; ++i)
#define FORR(i,a,b) for( int i=(a) ; i>=(b) ; --i)
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
    ll n,x;
    cin>>n>>x;
    ll count = 0;
    ll i;
    FOR(i,1,n){
        ll t;
        cin>>t;
        if( t > x)
            count++;
    }
    cout<<count<<"\n";    
	return 0;
}