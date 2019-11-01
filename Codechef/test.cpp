#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long int


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        ll n;
        cin>>n;
        n--;        
        map<ll ,vector<ll>  > mp; 
        while( n-- ){
            ll x,y;
            cin>>x>>y;
            mp[x].push_back(y);
        }


    queue<ll> q;
    int maxcount = INT_MIN;
    int level = 1;
    int ans = 1;
    q.push(1);

    int cur =1;
    while(q.size() != 0 ){
        
        int nodecount = q.size();   
        if( nodecount == 0 ) 
            break;
        if( nodecount > maxcount ){
            maxcount = nodecount;
            ans = level;
        }
        
        while(nodecount > 0){
            cur = q.front();
            if( mp.count( cur ) == 0 ){
                q.pop();
                nodecount--;
                continue;
            }
            vector<ll> v = mp[cur];
            q.pop();
            for( int i=0;i<v.size();i++ ){
                q.push(v[i]);
            }
            nodecount--;
        }
        
        level++;
    }

    cout<<ans<<"\n";
    
	return 0;
}
