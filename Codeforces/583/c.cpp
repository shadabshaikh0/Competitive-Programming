#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if( n & 1){
        cout<<"NO\n";
    }
    else{
        stack<char> st;
        ll oc = 0,cc= 0;
        for( ll i=0;i<n;i++ ){
            if( s[i] == '(' ){
                st.push( '(' );
                oc++;
            }            
            else{
                cc++;
                if( !st.empty() )
                    st.pop();
            }
        }
        if( oc == cc ){
            if( st.empty() ||  (  (st.size() == 1) && (st.top() == '(') )  ){
                cout<<"YES\n";                
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            cout<<"NO\n";
        }
    }
	return 0;
}