#include<bits/stdc++.h>
#define ll long long int 
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
		ll n,m;
		cin>>n>>m;
		vector< pair<ll,ll> > v(n);
        for( ll i=0;i<n;i++ ){
            cin>>v[i].first;
            v[i].second = i+1;
        }
        if( n > m )
            cout<<"-1\n";
        else{
            ll sum = 0;
            for( ll i=0;i<n;i++ ){
                sum += v[i].first;
            }
            sum *= 2;
            sort( v.begin(),v.end() );
            ll first = v[0].first,second =v[1].first;
            ll add = first + second;
            sum += (m-n)*add;
            cout<<sum<<"\n";
            for( ll i=1;i<=n;i++ ){
                if( i == n )
                    cout<<n<<" "<<1<<"\n";
                else
                    cout<<i<<" "<<i+1<<"\n";
            }
            ll count = m-n;
            while(count-- ){
                cout<< v[0].second <<" "<<v[1].second<<"\n";
            }
        }      
               
    }
	return 0;
}