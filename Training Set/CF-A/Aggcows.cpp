#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

bool placecows( vector<ll> &v,ll mid ,ll cows  ){
    ll n = v.size();
    ll count = 1;
    ll start = v[0];
    for( ll i=1;i<n;i++ ){
        if( v[i]-start >=mid ){
            count++;
            start = v[i];
        }
        if( count == cows )    
            return true;
    }
    return false;
}

int main()
{
	bolt;
	ll t;
	cin>>t;
	while(t--){
		ll n,c;
		cin>>n>>c;
		vector<ll> v(n);
		RD(v,n);	

        sort( v.begin(),v.end() );

        ll ans = -1;
        ll low=0,high= v[n-1] - v[0];

        while( low <= high ){
            ll mid = (low+high)/2;
            bool flag = placecows( v,mid,c );
            if( flag == false ){
                high = mid -1;
            }
            else{
                low = mid+1;
                ans = max(ans,mid);
            }
        }
        cout<<ans<<"\n";
	}
	return 0;
}