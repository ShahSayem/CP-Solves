#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    while (cin>>n>>m){

        if(n > m){
        cout<<n-m<<endl;
        }
    else {
        cout<<m-n<<endl;
        }
    }
    
    return 0;
}
