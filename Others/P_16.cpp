#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int temp = 0, count = 0;
    while(t--){
        int p;
        cin>>p;

        int price = 2048, count = 0;
        while(p>0){
            count += p/price;
            p %= price;
            price /= 2;
        }
        cout<<count<<endl;  
    }
    
    return 0;
}