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
    ll a,b;
    ll t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        ll diff =  abs(a-b);
        ll count = 0;

        ll temp = (diff/5);
        count += temp;
        diff = diff % 5;

        temp = (diff/2);
        count += temp;
        diff = diff % 2;

        count += diff;
 
        cout<<count<<"\n";
    }
	return 0;
}