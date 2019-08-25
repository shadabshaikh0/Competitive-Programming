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
		ll n,a,b;
		cin>>n>>a>>b;
        string s;
        cin>>s;

        vector<ll> v(n+1,1);

        for( ll i=0;i<s.length()-1;i++ ){
            if( s[i] == '1' ){
                v[i] = 2;
                v[i+1] = 2;
            }
        }
        v[0] = 1;
        v[n] = 1;
        ll count = 0;
        for( ll i=0;i<v.size()-1;i++ ){
            if( v[i] != v[i+1] ){
                count += 2;                
            }
            else
                count++;
        }        


        for( auto &i:v ){
            cout<<i<<" ";
        }
        cout<<"\n";
        ll count1 = 0;
        count1 = accumulate( v.begin(),v.end(),count1 );
        cout<<count1<<" "<<count<<"\n";
        ll ans = 0;
        ans = count * a + count1 * b;
        cout<<ans<<"\n";
	}
	return 0;
}