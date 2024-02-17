#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    int n = 1;
    while(t--){
        float a, b;
        cin>>a>>b;

        int time = 1 / ((1/a) - (1/b));

        cout<<"Case "<<n<<": "<<time<<endl;
        ++n;
    }
    
    return 0;
}