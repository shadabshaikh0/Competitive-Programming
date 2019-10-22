#include<bits/stdc++.h>
#define ll long long int 
#define FOR(i,a,b) for( ll i=(a) ; i<=(b) ; ++i)
#define FORR(i,a,b) for( ll i=(a) ; i>=(b) ; --i)
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    ll n;
    cin>>n;

    vector< vector<ll> > v(n);
    ll count = n;
    ll i;
    ll num = 1;
    for( i=0;i<n;i++ ){
        v[i].push_back(num++);
        if(i == n-1 )
            break;
    }
    while( count-- ){
        ll round = n;
        while( round-- ){
            v[i].push_back(num++);
            if( round == 0 )    
                break;
            i = (i+1)%n;
        }
    }
    ll j;
    FOR(i,0,n-1){
        FOR(j,0,n-1){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
	return 0;
}