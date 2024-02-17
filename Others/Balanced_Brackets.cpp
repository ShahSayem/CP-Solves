#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

bool solve(){

    string s;
    cin>>s;

    if (s.size()%2){
        return false;
    }
        
    stack <char> st;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                return false;
            }

            char c = st.top();
            st.pop();

            if (s[i] == ')' && c == '('){
                continue;
            }
            else if (s[i] == '}' && c == '{'){
                continue;
            }
            else if (s[i] == ']' && c == '['){
                continue;
            }
            else {
                return false;
            }
        }
    }
    
    if(st.empty()){
        return true;
    }
    else {
        return false;
    }
    
}

int main()
{

    int t;
    cin>>t;
    while (t--){
        bool check = solve();
        
        if(check)
            cout<<"YES";
        else 
            cout<<"NO";
    
        cout<<"\n";
    }

    return 0;
}