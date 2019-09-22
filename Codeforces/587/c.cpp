#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
    ll wx1,wy1,wx2,wy2;
    ll b1x1,b1y1,b1x2,b1y2;
    ll b2x1,b2y1,b2x2,b2y2;
     
    cin >> wx1>>wy1>>wx2>>wy2;
    cin >> b1x1>>b1y1>>b1x2>>b1y2;
    cin >> b2x1>>b2y1>>b2x2>>b2y2;

    if( b2x1 <  b1x1 ){
        swap( b1x1,b2x1 );
        swap( b1x2,b2x2 );
        swap( b1y1,b2y1 );
        swap( b1y2,b2y2 );
    }

    // full overlap
    if( wx1 >= b1x1 && wx2 <= b1x2 && wy1 >= b1y1 && wy2 <= b1y2  ){
        cout<<"NO\n";
    } 
    else if( wx1 >= b2x1 && wx2 <= b2x2 && wy1 >= b2y1 && wy2 <= b2y2  ){
        cout<<"NO\n";
    }
    else if( wx1 >= b1x1 && wx2 <= b2x2 && wy1 >= b1y1 && wy1 >= b2y1 && wy2 <= b1y2 && wy2 <= b2y2 && ( b1x2 >= b2x1 && b1y2 >= b2y1 ) ){
        cout<<"NO\n";
    }
    else{
        if( b2y1 <  b1y1 ){
            swap( b1x1,b2x1 );
            swap( b1x2,b2x2 );
            swap( b1y1,b2y1 );
            swap( b1y2,b2y2 );
        }
        if( wx1 >= b1x1 && wx2 <= b2x2 && wy1 >= b1y1 && wy1 >= b2y1 && wy2 <= b1y2 && wy2 <= b2y2 && ( b1y2 >= b2y1) && b1x2 >= b2x1 ){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }

    return 0;
}