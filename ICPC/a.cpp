#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll findMinInsertionsDP(string str, ll len)  
{  
    ll dp[len][len];
    memset(dp,0,sizeof dp);
	    int h=0;
	    for(int i=1;i<len;i++){
		for(int j=0;i+j<len;j++){
			h=i+j;
			if(str[j]==str[h])
				dp[j][h]=dp[j+1][h-1];
			else
				dp[j][h]= min(dp[j+1][h],dp[j][h-1])+1;
 
		}
	}
	return dp[0][len-1];
}
int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        string s1,s2,su;
        cin>>s1>>s2;
        std::set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), std::back_inserter(su));
        cout<<(su.length()+findMinInsertionsDP(su,su.length()))<<"\n";
    }
}