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
		ll n;
		cin>>n;
		vector<ll> v(n);
		RD(v,n);	
        if( n == 1 )
            cout<<0<<"\n";
        else if( n == 2 ){
            if( v[0] == v[1] )
                cout<<"0 0\n";
            else
                cout<<"1 0\n";
        }
        else{
            ll count =0;
            vector<ll> b(n,0);
            b[n-1] = 0;
            for( ll i=n-2;i>=0;i--){
                count++;
                if( v[i+1] != v[i] )    
                    b[i] = count;
                else
                    b[i] = b[i+1];
            }
            for( auto it:b )
                cout<<it<<" ";
            cout<<"\n";
        }
	}
	return 0;
}