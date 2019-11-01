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

        ld mindistance1 = 0;
        ld mindistance2 = 0;

        point best,next;
        best.x = x;
        best.y = y;

        ld mindist = INT_MAX;
        for( ll i=0;i<n;i++ ){
            ld dist = sqrt( (best.x - first[i].x) * (best.x - first[i].x) + (best.y - first[i].y) * (best.y - first[i].y) );
            if( dist < mindist ){
                mindist =  dist;
                next.x = first[i].x;
                next.y = first[i].y;
            }
        }

        mindistance1 += mindist;

        best.x = next.x;
        best.y = next.y;

        mindist = 1e10;
        for( ll i=0;i<m;i++ ){
            ld dist = sqrt( (best.x - second[i].x) * (best.x - second[i].x) + (best.y - second[i].y) * (best.y - second[i].y) );
            if( dist < mindist ){
                mindist =  dist;
                next.x = second[i].x;
                next.y = second[i].y;
            }
        }

        mindistance1 += mindist;

        best.x = next.x;
        best.y = next.y;

        mindist = INT_MAX;
        for( ll i=0;i<k;i++ ){
            ld dist = sqrt( (best.x - last[i].x) * (best.x - last[i].x) + (best.y - last[i].y) * (best.y - last[i].y) );
            if( dist < mindist ){
                mindist =  dist;
                next.x = last[i].x;
                next.y = last[i].y;
            }
        }

        mindistance1 += mindist;



        best.x = x;
        best.y = y;

        mindist = INT_MAX;
        for( ll i=0;i<m;i++ ){
            ld dist = sqrt( (best.x - second[i].x) * (best.x - second[i].x) + (best.y - second[i].y) * (best.y - second[i].y) );
            if( dist < mindist ){
                mindist =  dist;
                next.x = second[i].x;
                next.y = second[i].y;
            }
        }

        mindistance2 += mindist;

        best.x = next.x;
        best.y = next.y;

        mindist = INT_MAX;
        for( ll i=0;i<n;i++ ){
            ld dist = sqrt( (best.x - first[i].x) * (best.x - first[i].x) + (best.y - first[i].y) * (best.y - first[i].y) );
            if( dist < mindist ){
                mindist =  dist;
                next.x = first[i].x;
                next.y = first[i].y;
            }
        }

        mindistance2 += mindist;

        best.x = next.x;
        best.y = next.y;

        mindist = INT_MAX;
        for( ll i=0;i<k;i++ ){
            ld dist = sqrt( (best.x - last[i].x) * (best.x - last[i].x) + (best.y - last[i].y) * (best.y - last[i].y) );
            if( dist < mindist ){
                mindist =  dist;
                next.x = last[i].x;
                next.y = last[i].y;
            }
        }

        mindistance2 += mindist;

        cout<< fixed<< setprecision(10)<< min( mindistance1,mindistance2)  <<"\n";

	}
	return 0;
}