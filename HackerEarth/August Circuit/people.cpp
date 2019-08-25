#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;


bool compare( const pair< ll , pair<ll,ll> > &a,const pair< ll , pair<ll,ll> > &b ){
    if( a.second.first == b.second.first )
        return a.second.second < b.second.second;
    return a.second.first < b.second.first;
}
int main()
{
	bolt;
    ll n;
    cin>>n;
    ll g;
    cin>>g;
    vector< pair< ll , pair<ll,ll> >  > v(n);
    for( ll i=0;i<n;i++ ){
        ll x,y;
        cin>>x>>y;
        v[i] = make_pair(i+1, make_pair(x,y) );
    }
    sort( v.begin(),v.end(),compare );

    for( auto it:v ){
        cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<"\n";
    }

    ll noofbuildings = (n / g);
    cout<<noofbuildings<<"\n";
    ll j = 0;
    for( ll i=1;i <=noofbuildings;i++ ){
        if( i == noofbuildings ){
            ll temp = g+(n%g); 
            cout<< temp <<"\n";
            while( temp-- ){
                cout<<v[j].first<<" ";
                j++;                
            }
        }
        else{
            cout<<g<<"\n";
            ll count = g;
            while(count--){
                cout<<v[j].first<<" ";
                j++;
            }
            cout<<"\n";
        }
    }    

	return 0;
}