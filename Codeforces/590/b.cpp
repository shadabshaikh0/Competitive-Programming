#include<bits/stdc++.h>
#define ll long long int 
#define FOR(i,a,b) for( int i=(a) ; i<=(b) ; ++i)
#define ford(i,a,b) for( int i=(a) ; i>=(b) ; --i)
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define MAX 1000000000
int main()
{
	bolt;
    ll n,k;
    cin>>n>>k;

    deque<ll> dq;
    vector<bool> count1(MAX+1,false);
    ll i;
    FOR( i,1,n ){
        ll x;
        cin>>x;
        if( count1[x] == false ){
            if( dq.size() == k ){
                ll temp = dq.back();
                count1[temp] = false;
                dq.pop_back();
                dq.push_front(x);
            }
            else{
                dq.push_front(x);
            }
            count1[x] = true;
        }
    }
    cout<<dq.size()<<"\n";
    for(auto i:dq){
        cout<<i<<" ";
    }
    cout<<"\n";
	return 0;
}