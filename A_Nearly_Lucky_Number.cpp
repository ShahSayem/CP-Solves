#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int x = count(s.begin(), s.end(), '4');
    int y = count(s.begin(), s.end(), '7');

    if(x+y == 4 || x+y == 7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}