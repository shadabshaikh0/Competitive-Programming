#include<bits/stdc++.h>
#define ll unsigned long long int 
#define ld long double 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
        ll high = n*(n-1)/2  + n  ;
        if( m <  n-1 || m > ( high  )  )
            cout<<-1<<"\n";
        else if( n == 1 ){
            if( m == 0 )
                cout<<0<<"\n";
            else if( m == 1 )
                cout<<1<<"\n"; 
        }
        else if( n == 2 ){
            if( m == 1 )
                cout<<1<<"\n";
            else if( m == 2 )
                cout<<2<<"\n";
            else if( m == 3 )
                cout<<2<<"\n";
        }
        else if( m >= n-1 && m <= n+1  ){
            cout<<2<<"\n";
        }
        else if( m > n +1 && m<=2*n ){
            cout<<3<<"\n";
        }
        else{
            ll remain = m - 2*n;
            ll mod = remain % n;
            ll group = remain / n;
            ll ans = 3;
            ans += group*2;
            if( mod == 0 )
                ans+=0;
            else if( mod <= n/2 )
                ans += 1;
            else
                ans += 2;
            cout<<ans<<"\n";
        }
	}
	return 0;
}   