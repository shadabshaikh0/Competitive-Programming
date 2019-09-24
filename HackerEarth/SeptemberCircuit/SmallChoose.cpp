#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

string findLongestIncreasing(string s){
    string res = ""; 
    ll current = 0; 
    ll n = s.length();
    while (current < n) { 
  
        char maxans = s[current]; 
        for (ll i = current + 1; i < n; i++) 
            maxans = min(maxans, s[i]); 

        ll last = current;   
        for (ll i = current; i < n; i++) 
            if (s[i] == maxans) { 
                res += s[i]; 
                last = i; 
            } 
        current = last + 1; 
    } 
    return res; 
}
int main()
{
	bolt;
    ll a,b,c;
    cin>>a>>b>>c;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    string ans = findLongestIncreasing(s2);
    cout<<s1<<ans<<s3<<"\n";
	return 0;
}