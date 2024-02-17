#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

void solve(string s){
    if (s == "Hajj")
        cout<<"Hajj-e-Akbar";
    else 
        cout<<"Hajj-e-Asghar";

}

int main()
{
    string s;
    int i = 0;
    while(cin>>s){
        i++;
        if (s == "*")
            return 0;

        cout<<"Case "<<i<<": ";
        solve(s);
        cout<<endl;
    }
    
    return 0;
}