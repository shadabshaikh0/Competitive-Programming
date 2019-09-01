#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
	ll t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
        k++;
		vector<ll> v(n);
		RD(v,n);	
        ll p = 1;
        bool flag = true;
        for( ll i=0;i<n && flag ;i++ ){

            if( i == 0LL ){
                if( v[i] == -1LL ){
                    ll count = 0;
                    while( v[i+1] == p && count <= k ){
                        p = (p +1) %k; 
                        if( p == 0 )
                            p++;
                        count++;
                    }
                    if( count > k )
                        flag = false;
                    v[i] = p;
                }
            }
            else if( i == n-1 ){
                if( v[i] == -1LL ){
                    ll count = 0;
                    while( v[i-1] == p && count <= k ){
                        p = (p+1)%k;
                        if( p == 0 )
                            p++;
                        count++;
                    }
                    if( count > k )
                        flag = false;
                    v[i] = p;
                }
            }
            else{
                if( v[i] == -1LL ){
                    ll count = 0;
                    while( ( v[i-1] == p || v[i+1] == p)  && count <= k){
                        p = (p+1)%k;
                        if( p == 0 )
                            p++;
                        count++;
                    }
                    if( count > k )
                        flag = false;
                    v[i] = p;   
                }
            }

        }
        for( ll i=0;i<n;i++ ){
            cout<<v[i]<<" ";
        }
        cout<<"\n";

        if( !flag )
            cout<<"NO\n";
        else{
            cout<<"YES\n";
            for( ll i=0;i<n;i++ ){
                cout<<v[i]<<" ";
            }
            cout<<"\n";
        }

	}
	return 0;
}