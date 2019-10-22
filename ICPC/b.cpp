#include<bits/stdc++.h> 
using namespace std; 
  
void driver(deque<char> &dq, char ch) 
{ 
    if (dq.empty()) 
        dq.push_back(ch); 
  
    else
    { 
        char temp = dq.back(); 
        while( temp > ch && !dq.empty()) 
        { 
            dq.pop_back(); 
            if (!dq.empty()) 
                temp = dq.back(); 
        } 
        dq.push_back(ch);
    }
    return; 
} 
  
string findans(string str) 
{ 
    int n = 1;
    int len = str.length();   
    int k = len - n; 
  
    deque<char> dq; 
    string res = ""; 
  
    int i; 
    for (i=0; i<=len-k; i++) 
        driver(dq, str[i]); 
  
    while (i < len) 
    { 
        res += dq.front(); 
  
        dq.pop_front(); 
  
        driver(dq, str[i]); 
        i++; 
    } 
  
    res += dq.front(); 
    dq.pop_front(); 
    return res; 
} 
  
int main() 
{ 

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str = to_string(n);
        str =  findans(str); 
        str.erase(0, min(str.find_first_not_of('0'), str.size()-1));
        cout<<str<<"\n";
    }

    return 0; 
} 