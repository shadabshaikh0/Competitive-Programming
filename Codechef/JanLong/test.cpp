#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define MAX 100001

ll toindex(string s) { 
    ll result = 0; 
    for (auto& c : s){ 
        result *= 26; 
        result += c -'a' + 1; 
    }   
    return result-1; 
}

string tostring(ll n){ 
    string str = "";
    while (n>0){  
        ll rem = n%26; 
        if (rem==0){ 
            str += 'z'; 
            n = (n/26)-1; 
        } 
        else{ 
            str += (char)( (rem-1) + 'a'); 
            n = n/26; 
        } 
    }   
    reverse(str.begin(),str.end() );   
    return str; 
} 

void solve( vector<string> &str ){
    vector< bool > dp(MAX,false);
    ll n = str.size();
    vector<ll> index;
    for( ll i=0;i<n;i++ ){
        if( str[i] == "?" ){
            index.push_back(i);
        }
        else{
            ll index = toindex(str[i]);
            if( index < MAX ){
                dp[index] = true;
            }
        }
    }

    ll j = 0, m = index.size();
    for( ll i=1;i<MAX && j<m ;i++ ){
        if( dp[i] == false  ){
            str[ index[j] ] =  tostring(i+1);
            j++;
        }        
    }
    for( auto s:str ){
        cout<<s<<"\n";
    }
}

int main(){
    vector<string> input;
    ll n;
    cin>>n;
    for( ll i=0;i<n;i++ ){
        string s;
        cin>>s;
        input.push_back(s);
    }
    solve(input);
    return 0;
}