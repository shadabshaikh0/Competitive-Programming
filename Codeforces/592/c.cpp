#include<bits/stdc++.h>
#define ll long long int 
#define FOR(i,a,b) for( ll i=(a) ; i<=(b) ; ++i)
#define FORR(i,a,b) for( ll i=(a) ; i>=(b) ; --i)
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
    ll n,p,w,d;
    cin>>n>>p>>w>>d;

    ll a1,b1,c1;
    ll a2,b2,c2;
    a1 = w;
    b1 = d;
    c1 = p;

    a2 = 1;
    b2 = 1;
    c2 = n;

    ll x = (( b1*c2 ) - (b2*c1)) / (( a1*b2 ) - (a2*b1 ) );
    ll y = (( a2*c1 ) - (a1*c2)) / (( a1*b2 ) - (a2*b1 ) );
    cout<<x<<" "<<y<<"\n";
    
    // if( x > 0 && y> 0 ){
    // }
    // else{
    //     cout<<-1<<"\n";
    // }

	return 0;

}