#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin>>n;
    int i;
    for(int k = 2; k <= n; k++){
        count=0;
        for (i = 2; i <= (k+1)/2 ; i++){
            if(k%i == 0){
                count++;
                break;
            }
        }
        if (count == 0){
        cout<<k<<" ";
        cout<<"Divisor of k"<<": "<<1<<" "<<k;
        cout<<"count of divisor: "<<2<<endl;

        }
    }
    return 0;
}