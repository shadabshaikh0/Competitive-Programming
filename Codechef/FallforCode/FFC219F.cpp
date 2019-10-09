#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n,p;
        cin>>n>>p;
        priority_queue<ll, vector<ll>, greater<ll> > pq;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            if( x <= p )
                pq.push(x);
        }
        ll count = 0;
        ll sum = 0;
        while(!pq.empty()){
            sum += pq.top();
            pq.pop();
            if( sum > p ){
                break;
            }
            count++;
        }
        cout<<count<<"\n";
    }
	return 0;
}
