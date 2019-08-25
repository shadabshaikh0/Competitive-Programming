#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
	ll n,m;
	cin>>n>>m;
	vector< vector<ll> > v(n,vector<ll>(m));

	vector< vector<ll> > ans(n,vector<ll>(m,0));

	for( ll i=0;i<n;i++ ){
		for(ll j=0;j<m;j++){
			cin>>v[i][j];
		}
	}

	vector<pair<ll,ll>> temp;
	for( ll i=0;i<n-1;i++ ){
		for(ll j=0;j<m-1;j++){
			if( (v[i][j] != 0) && (v[i+1][j] != 0) && (v[i][j+1] != 0) && (v[i+1][j+1] != 0)   ){
				ans[i][j] = 1;				
				ans[i+1][j] = 1;				
				ans[i][j+1] = 1;				
				ans[i+1][j+1] = 1;				
				temp.emplace_back( make_pair(i+1,j+1) );
			}
		}
	}

	bool flag = false;
	for( ll i=0;i<n;i++ ){
		for(ll j=0;j<m;j++){
			if( v[i][j] != ans[i][j] )
			{
				flag =true;
				break;
			}
		}
	}

	if( flag ){
		cout<<"-1\n";
	}
	else{
		cout<<temp.size()<<"\n";
		for( auto it:temp ){
			cout<<it.first<<" "<<it.second<<"\n";
		}
	}



	return 0;
}