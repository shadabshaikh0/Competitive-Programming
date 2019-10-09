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
		ll n;
		cin>>n;
        ll i;
        priority_queue<ll> pq;
        FOR(i,1,n){
            ll x;
            cin>>x;
            pq.push(x);
        }
		// vector<ll> p(n);
		// RD(p,n);
        ll x,a;
        cin>>x>>a;	
        ll y,b;
        cin>>y>>b;	
        ll k;
        cin>>k;

        ll lcm = (a*b)/__gcd(a,b); 
        vector< pair<ll,ll> > ans(n+1,make_pair(0,0));

        ll total = 0;
        for( i=lcm;i<=n;i+=lcm ){
            ll temp = pq.top();
            pq.pop();
            ans[i] = {temp,3};
        }
        ll first,second;
        if( x <=  y ){
            first = b;
            second = a;
        }
        else{
            first = a;
            second = b;            
        }
        for(i=first;i<=n && !pq.empty() ;i+=first){
            if(ans[i].first == 0 ){
                ll temp = pq.top();
                pq.pop();
                ans[i] = {temp,1};                        
            }
        }
        
        
        for(i=second;i<=n && !pq.empty() ;i+=second){
            if(ans[i].first == 0 ){
                ll temp = pq.top();
                pq.pop();
                ans[i] = {temp,2};                        
            }
        }


        ll cnt = 0;
        ll maxe  = max(x,y);
        ll mine  = min(x,y);
        FOR(i,1,n){
            cout<<i<<" "<<ans[i].first<<" "<<ans[i].second<<"\n";
            ll option = ans[i].second;
            switch(option){
                case 1:
                    cnt++;                    
                    total += ( ans[i].first * (maxe)/100);
                    break;
                case 2:
                    total += ( ans[i].first * (mine)/100);
                    cnt++;
                    break;
                case 3:
                    total += ( ans[i].first * (x+y)/100);
                    cnt++;
                    break;
                case 0:
                    cnt++;
                    break;
            }
            cout<<total<<"\n";
            if( total >= k ){
                break;
            }
        }
        if(total < k)
            cout<<-1<<"\n";
        else
            cout<<cnt<<"\n";
	}
	return 0;
}