#include<bits/stdc++.h>
#define ll long long int 
#define ld long double 

#define FOR(i,a,b) for( ll i=(a) ; i<=(b) ; ++i)
#define FORR(i,a,b) for( ll i=(a) ; i>=(b) ; --i)
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
        ll a,b,c;
        cin>>a>>b>>c;

        string s;
        cin>>s;

        ll count = 0;
        ll win   = ceil( (ld)n/(ld)2 );
        vector<char> ans(n,'-');
        ll dash = n;
        for( ll i=0;i<n;i++ ){
            if( s[i] == 'R' ){
                if( b > 0 ){
                    b--;
                    ans[i] = 'P';
                    count++;
                    dash--;
                    if( count >= win )
                        break;
                }
            }
            else if( s[i] == 'P' ){
                if( c > 0 ){
                    c--;
                    dash--;
                    ans[i] = 'S';
                    count++;
                    if( count >= win )
                        break;
                }
            }
            else if( s[i] == 'S' ) {
                if( a > 0 ){
                    a--;
                    dash--;
                    ans[i] = 'R';
                    count++;
                    if( count >= win )
                        break;
                }
            }
        }

        if( count < win ){
            cout<<"NO\n";
        }
        else{
            for( ll i=0;i<n;i++ ){
                if( ans[i] == '-' ){
                    if( a > 0 ){
                        ans[i] = 'R';
                        a--;
                        dash--;
                    }
                    else if( b > 0 ){
                        ans[i] = 'P';
                        b--;
                        dash--;
                    }
                    else if( c > 0) {
                        ans[i] = 'S';
                        dash--;
                        c--;
                    }
                }
            }
            if( dash == 0 ){
                cout<<"YES\n";
                for( ll i=0;i<n;i++ ){
                    cout<<ans[i];
                }
                cout<<"\n";
            }
            else{
                cout<<"NO\n";
            }
        }

	}
	return 0;
}