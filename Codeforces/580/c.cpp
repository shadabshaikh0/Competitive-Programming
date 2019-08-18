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

    if( n & 1 ){
        cout<<"YES\n";
        vector<ll> a;
        vector<ll> b;
        a.emplace_back(1);

        for( ll i=2;i<=2*n; ){
            if( i <= 2*n )                        
                b.emplace_back(i);
            i++;
            if( i <= 2*n )                        
                b.emplace_back(i);
            i++;
            if( i <= 2*n )                        
                a.emplace_back(i);
            i++;
            if( i <= 2*n )                        
                a.emplace_back(i);
            i++;
        }
        for( ll i=0;i<a.size();i++ ){
            cout<<a[i]<<" ";
        }
        for( ll i=0;i<b.size();i++ ){
            cout<<b[i]<<" ";
        }
        cout<<"\n";
    }
    else{
        cout<<"NO\n";
    }

	return 0;

}