#include<bits/stdc++.h>
#define ll long long int 
#define FOR(i,a,b) for( ll i=(a) ; i<=(b) ; ++i)
#define FORR(i,a,b) for( ll i=(a) ; i>=(b) ; --i)
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
    string s;
    unordered_map<string,int> mp;
    mp["SAT"] = 1;
    mp["FRI"] = 2;
    mp["THU"] = 3;
    mp["WED"] = 4;
    mp["TUE"] = 5;
    mp["MON"] = 6;
    mp["SUN"] = 7;
    cin>>s;
    cout<<mp[s]<<"\n";

	return 0;
}