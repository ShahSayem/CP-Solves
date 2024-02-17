#include <iostream>
#include <cstdlib>
#include <math.h>
#include <algorithm>
#define   ll   long long
using namespace std;


int main()
{
    ll a, b;

    while(cin>>a>>b){
        if (a>b)
            cout<<a-b;
        else
            cout<<b-a;
        cout<<endl;
    }
    
    return 0;
}