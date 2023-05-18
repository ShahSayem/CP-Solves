#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s = to_string(n);
    if (s.size() == 4) {
        cout<<n<<endl;
    }
    else if (s.size() == 3) {
        cout<<0<<n<<endl;
    }
    else if (s.size() == 2) {
        cout<<"00"<<n<<endl;
    }
    else {
        cout<<"000"<<n<<endl;
    }
    return 0;
}