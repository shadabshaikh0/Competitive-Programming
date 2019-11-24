#include<bits/stdc++.h>
#define ll long long int 
#define FOR(i,a,b) for( ll i=(a) ; i<=(b) ; ++i)
#define FORR(i,a,b) for( ll i=(a) ; i>=(b) ; --i)
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;


ll noofdigits(ll n){
    ll count = 0;
    while(n){
        count++;
        n /= 10;
    }
    return count;
}

ll cal(ll a,ll b,ll n  ){
    return a*n + b*noofdigits(n);
}

int main()
{
	bolt;
    ll a,b,x;
    cin>>a>>b>>x;
    ll start = 1, end = 1000000000;
    ll ans = 0;
    while( start <= end ){
        ll mid = ( start + end ) / 2;
        if(  cal(a,b,mid) <= x  ){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid-1;
        }
    } 
    cout<<ans<<"\n";
	return 0;
}