#include<bits/stdc++.h>
#define ll long long int 
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll zc =0;
    ll oc =0;
    for(ll i=0;i<n;i++){
        if(s[i] == '0' )
            zc++;
        else
            oc++;
    }       

    if(!oc){
        cout<<"0\n";
    }
    else{
        cout<<"1";
        while(zc--){
            cout<<"0";
        }
        cout<<"\n";
    }

	return 0;
}