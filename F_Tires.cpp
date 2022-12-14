#include <iostream> //iostream
using namespace std;

int main()
{
    string s;
    cin>>s;
    if (s[s.size()-1] == 'r') {
        cout<<"er";
    }
    else {
        cout<<"ist";
    }
return 0;
}