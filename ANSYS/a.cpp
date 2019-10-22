#include<bits/stdc++.h>
#define ll unsigned long long int 
#define MAX 1000000000000000000
using namespace std;

int main()
{
	ll t;
	cin>>t;
	while(t--){
		ll n,f;
		cin>>n>>f;
        ll a[30];ll b[30];
        a[0]=f;b[0]=0;
        a[1]=3*f;b[1]=1;
        a[2]=9*f;
        b[2]=2;
        a[3]=27*f;
        b[3]=7;

        vector<ll> sum;
        for(int i=0;i<=3;i++){
            sum.push_back(a[i]+b[i]);
        }
        ll last;
        if( n > 21 ){
            last = 22;
        }
        for(int i=4;i<last;i++)
        {
            if(i%2==0)
            {
                a[i]=2*a[i-1]*f+3*a[i-2];
                b[i]=2*b[i-1]+3*b[i-2];
            }
            else{
                a[i]=3*a[i-1]*f;
                b[i]=3*b[i-1]+1;
            }
            if(a[i]+b[i]>MAX) {break;}
            sum.push_back(a[i]+b[i]);
        }
        unordered_map<ll,bool> mp;
        ll sumsize = sum.size();
        
        ll set_size = (1 << sumsize)-1; 
        for(ll i = 0; i < set_size; i++) 
        { 
            ll ans = 0;
            for(ll j = 0; j < sumsize; j++) 
            { 
                if(i & (1 << j)){
                    ans += sum[j];
                } 
            }
            if( ans <= MAX-1 )
                mp[ans] = true; 
        } 
        ll q;
        cin>>q;
        while(q--){
            ll x;
            cin>>x;
            if( mp.count(x) ){
                cout<<"true\n";
            }
            else{
                cout<<"false\n";
            }
        }

	}
	return 0;
}