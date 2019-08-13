#include<bits/stdc++.h>
#include<cmath>
#define ll long long int 
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

struct Point{
    long long int x,y;
};

bool compareX(Point a,Point b ){
    return a.x < b.x;
}
bool compareY(Point a,Point b ){
    return a.y < b.y;
}

int main()
{
	bolt;
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;

        unordered_map<ll,ll> xp,yp;
        bool flag = false;
        vector<Point> vx(n),vy(n);
        for(ll i=0;i<n;i++){
            ll x,y;
            cin>>x>>y;
            vx[i].x = x+y;
            vx[i].y = y-x;            

            vy[i].x = x+y;
            vy[i].y = y-x;      
            
            xp[x+y]++;
            yp[y-x]++;
            if( xp[x+y] > 1 || yp[y-x]>1 )
                flag = true;
        }

        if(flag)
            cout<<0<<"\n";
        else{
            sort(vx.begin(),vx.end(),compareX );
            sort(vy.begin(),vy.end(),compareY );

            ll pos1,pos2,pos3,pos4;
            double mindist1 = 1.79769e+308 ;
            for(ll i=0;i<n-1;i++){
                mindist1= min( mindist1, (double) abs(vx[i].x-vx[i+1].x)  );
            }

            double mindist2 = 1.79769e+308 ;
            for(ll i=0;i<n-1;i++){
                mindist2= min( mindist2, (double) abs(vy[i].y-vy[i+1].y)  );
            }

            cout<< fixed<<setprecision(6) << (min( mindist1,mindist2)/2)<<"\n";
        }

	}
	return 0;
}