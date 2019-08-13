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
		ll n,z;
		cin>>n>>z;
		vector<ll> a(n),b(n);
		RD(a,n);
        b =a;
        while(z--){
            bool flag = true;
            for( ll i= 0;i<n-1 ;i++){
                if( a[i] == 0 && a[i+1] == 1 ){
                    b[i] = 1;
                    b[i+1] = 0;
                    flag = false;
                }
            }
            a =b;
            if(flag)
                break;
        }      
        for(auto &i:a){
            cout<<i<<" ";
        }
        cout<<"\n";
	}
	return 0;
}