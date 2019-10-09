#include<bits/stdc++.h>
#define ll unsigned long long int 
#define FOR(i,a,b) for( int i=(a) ; i<=(b) ; ++i)
#define FORR(i,a,b) for( int i=(a) ; i>=(b) ; --i)
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
	ll t;
	cin>>t;
	while(t--){
		ll a,b,c;
        cin>>a>>b>>c;

        ll x1=1,y1=1;
        x1 *= a;
        y1 *= b;

        ll x2 = 1,y2 = 1;
        x2 *= c;
        y2 *= c;

        ll y = max(x2,x1)-min(x2,x1);
        ll x;
        if( y1 > y2 ){
            x = (y1-y2);
        }
        else{
            x = y2-y1;
        }

        while( (x%y == 0) && (y%y == 0) && (y!=1 || y!=0 || x != 1 || x!=0 ) ){
            x = x /y;
            y = y/y;
        }
        cout<<x<<" "<<y<<"\n";

	}
	return 0;
}