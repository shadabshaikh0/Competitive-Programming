#include<bits/stdc++.h>
#define ll long long int 
#define ld long double 
#define FOR(i,a,b) for( ll i=(a) ; i<=(b) ; ++i)
#define FORR(i,a,b) for( ll i=(a) ; i>=(b) ; --i)
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

struct point{
    ll x,y;
};

int main()
{
	bolt;
	ll t;
	cin>>t;
	while(t--){
        ll x,y;
        cin>>x>>y;

		ll n,m,k;
		cin>>n>>m>>k;

        vector< point > first(n);
        vector< point > second(m);
        vector< point > last(k);

        ll i;
        for( i=0;i<n;i++ ){
            cin>>first[i].x;
            cin>>first[i].y;
        }
        for( i=0;i<m;i++ ){
            cin>>second[i].x;
            cin>>second[i].y;
        }
        for( i=0;i<k;i++ ){
            cin>>last[i].x;
            cin>>last[i].y;
        }

        ld mindistance1 = INT_MAX;

        for( ll i=0;i<n;i++ ){

            ld dist1 = sqrt( ( x - first[i].x) * (x - first[i].x) + (y - first[i].y) * (y - first[i].y) );            

            for( ll j=0;j<m;j++ ){

                ld dist2 = dist1 + sqrt( ( second[j].x - first[i].x) * (second[j].x - first[i].x) + (second[j].y - first[i].y) * (second[j].y - first[i].y) );            

                for( ll l=0;l<k;l++ ){
                    ld dist3 =  dist2 + sqrt( ( second[j].x - last[l].x) * (second[j].x - last[l].x) + (second[j].y - last[l].y) * (second[j].y - last[l].y) );            
//                    cout<< fixed<< setprecision(10)<<  dist3 <<"\n";                    
                    mindistance1 = min( mindistance1,dist3 );
                }
            }
        }
//        cout<< fixed<< setprecision(10)<<  mindistance1 <<"\n";
        ld mindistance2 = INT_MAX;

        for( ll i=0;i<m;i++ ){

            ld dist11 = sqrt( ( x - second[i].x) * (x - second[i].x) + (y - second[i].y) * (y - second[i].y) );            

            for( ll j=0;j<n;j++ ){

                ld dist22 = dist11 + sqrt( ( second[i].x - first[j].x) * (second[i].x - first[j].x) + (second[i].y - first[j].y) * (second[i].y - first[j].y) );            

                for( ll l=0;l<k;l++ ){
                    ld dist33 = dist22 + sqrt( ( first[j].x - last[l].x) * (first[j].x - last[l].x) + (first[j].y - last[l].y) * (first[j].y - last[l].y) );            
                    mindistance2 = min( mindistance2,dist33 );
                }
            }
        }
        // cout<< fixed<< setprecision(10)<<  mindistance2 <<"\n";

        cout<< fixed<< setprecision(10)<< min( mindistance1,mindistance2)  <<"\n";

	}
	return 0;
}