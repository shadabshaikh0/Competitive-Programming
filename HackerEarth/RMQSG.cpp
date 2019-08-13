#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

void update(vector<ll> &v,vector<ll> &tree,ll n,ll index,ll value ){
    tree[n+index] = value;
    index += n;

    for( ll i=index; i>1;i>>=1){
        tree[i>>1] = min ( tree[i],tree[i^1]); 
    }
}

ll RMQ( vector<ll> &v,vector<ll> &tree,ll n,ll l,ll r){
    ll res = INT_MAX;
    if( l == r ){
        return tree[l];
    }
    for( l+= n,r+=n; l<r;l>>=1,r>>=1){
        if( l & 1 ){
            res = min(res,tree[l++]);
        }
        if( r & 1 ){
            res = min(res,tree[--r]);
        }
    }
    return res;
}

void build( vector<ll> &v,vector<ll> &tree,ll n ){
    for(ll i=n-1;i>0;i--){
        tree[i] = min( tree[i<<1],tree[i<<1 | 1 ] );
    }
}

int main()
{
	bolt;
    ll n,q;
    cin>>n>>q;

    vector<ll> v(n);
    vector<ll> tree(2*n,0);

    for(ll i =0;i<n;i++ ){
        cin>>v[i];
        tree[n+i] = v[i];
    }

    build(v,tree,n);

    while(q--){
        char type;
        ll l,r;
        cin>>type>>l>>r;
        if( type == 'q' ){
            cout<< RMQ(v,tree,n,l-1,r)<<"\n";
        }
        else{
            update(v,tree,n,l-1,r);
        }
    }

	return 0;
}