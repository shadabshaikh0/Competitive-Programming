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
		vector<ll> a(3),b(3);
		for(ll i=0;i<3;i++)
			cin>>a[i];
		for(ll i=0;i<3;i++)
			cin>>b[i];

		vector< pair<ll,ll> > v(3);
		for( ll i=0;i<3;i++ ){
			v[i] = { a[i],b[i] };
 		}		
		sort( v.begin(),v.end() );

		bool flag = false;
		if( v[0].first == v[1].first  ){
			if( v[0].second != v[1].second )
				flag = true;
		}
		else{
			if( v[0].second >= v[1].second )
				flag = true;
		}

		if( v[1].first == v[2].first  ){
			if( v[1].second != v[2].second )
				flag = true;
		}
		else{
			if( v[1].second >= v[2].second )
				flag = true;
		}

		if( v[0].first == v[2].first  ){
			if( v[0].second != v[2].second )
				flag = true;
		}
		else{
			if( v[0].second >= v[2].second )
				flag = true;
		}

		if( flag )
			cout<<"NOT FAIR\n";
		else
			cout<<"FAIR\n";
	}
	return 0;
}