#include<bits/stdc++.h>
#define ll long long int 
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
    string s,t;
    cin>>s>>t;
    ll n = s.length();
    ll m = t.length();
    ll i,j;

    for(i=n-1,j=m-1;i>=0 && j>=0;i--,j--){
        if( s[i] != t[j] ){
            break;
        }
    }
    cout<<i+1+j+1<<"\n";
	return 0;
}