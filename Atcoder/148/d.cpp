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
    vector<ll> v(n);
    RD(v,n);	
    ll ans = 0;
    ll pointer = 1;
    for(ll i=0;i<n;i++){
        if( pointer == v[i] ){
            pointer++;
        }
        else{
            ans++;
        }
    }
    if( ans == n ){
        cout<<-1<<"\n";
    }
    else{
        cout<<ans<<"\n";
    }
	return 0;
}