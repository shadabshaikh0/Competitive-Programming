#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define MOD 1000000007
int main()
{
	bolt;
	ll t;
	cin>>t;
	while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        ll count = 0;
        ll A=0,B=0,C=0;
        for( ll i=1;i<=b;i++ ){
            B = i*i;
            for( ll j = 1;j<a;j++ ){
                if( B < j ){
                    count = count + ( a - j) * (c-1);
                    break;
                }
                else{
                    ll k;
                    for( ll k=1;k<c;k++ ){
                        if( B < j*k ){
                            count = count + ( c-k);
                            break;                            
                        }
                    }
                }
            }
        }
        cout<<count%MOD<<"\n";
	}
	return 0;
}