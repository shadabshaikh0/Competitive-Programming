#include<bits/stdc++.h>
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
	string pattern,text;
	unordered_map<string,int> mp;
	cin>>pattern>>text;
	mp[pattern] = 1;
    int count = 0;    
    int pl = pattern.length();
    int n = text.length();
    for( int i=0;i+pl <= n;i++ ){
        string temp = text.substr(i,pl);
        if( mp.count(temp) ){
            count++;
        }
    }
    cout<<count<<"\n";
	return 0;
}