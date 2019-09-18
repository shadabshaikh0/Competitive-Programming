#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
    ll n;
    cin>>n;
    vector< vector<ll> > v(n,vector<ll>(n));
    for( ll i=0;i<n;i++ ){
        for( ll j=0;j<n;j++ ){
            cin>>v[i][j];
        }
    }
    vector<ll> ans;

    ll temp = v[0][1];
    for( ll i=2;i<n;i++ ){
        temp = __gcd(temp,v[0][i]);        
    }
    ans.push_back(temp);
    for(ll i=1;i<n;i++){
        ans.push_back( v[0][i] / temp );
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
	return 0;
}