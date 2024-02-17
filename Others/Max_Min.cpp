#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;

    if (a > b && a > c){
        cout<<"Maximum is "<<a<<endl;
    }
    else if (b > c && b > a){
        cout<<"Maximum is "<<b<<endl;
    }
    else {
        cout<<"Maximum is "<<c<<endl;
    }
    if (a < b && a < c){
        cout<<"Minimum is "<<a<<endl;
    }
    else if (b < c && b < a){
        cout<<"Minimum is "<<b<<endl;
    } 
    else{
        cout<<"Minimum is "<<c<<endl;
    }
    return 0;
}