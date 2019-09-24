#include<bits/stdc++.h>
#define ll unsigned long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
	ll t;
	cin>>t;
	while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        ll leftsum = 0,rightsum =0;
        leftsum = (a*1) + (b*2)+(c*3);
        bool flag = false;
        while( c-- ){
            rightsum += 3;
            leftsum  -= 3;
            if( leftsum == rightsum ){
                flag = true;
                break;
            }
        }
        while( b-- && !flag  ){
            rightsum += 2;
            leftsum  -= 2;
            if( leftsum == rightsum ){
                flag = true;
                break;
            }
        }
        while( a-- && !flag ){
            rightsum += 1;
            leftsum  -= 1;
            if( leftsum == rightsum ){
                flag = true;
                break;
            }
        }
        if( flag )
            cout<<"YES\n";
        else
            cout<<"NO\n";
	}
	return 0;
}