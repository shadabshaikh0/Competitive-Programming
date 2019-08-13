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
    ll x,y;
    cin>>x>>y;    
    vector<ll> v(n);
    RD(v,n);

    for(ll i=0;i<n;i++){ 
        bool f1 = true,f2=true;

        for( ll j=i-1;j>=0 && j >= i-x  ;j-- ){
            if( v[i] > v[j] ){
                f1 = false;
                break;
            }                        
        }
        for( ll j=i+1;j<n && j <= i+y  ;j++ ){
            if( v[i] > v[j] ){
                f1 = false;
                break;
            }                                    
        }
        if( f1 & f2  ){
            cout<<i+1<<"\n";
            break;
        }


    }
	return 0;
}