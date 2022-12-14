#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i = 2, count = 0;
    while(i <= n){
        count = 0;
        int j = 1;
        if(i%2 == 0){
            while(j < (n/2)+1){
                if(i%j == 0){
                    count++; 
                }
                j++;
            }
            if (n/2 < i){
            count++;
            }
            cout<<i<<":"<<count;
        }
        else {
            continue;
        }
        i += 2;
        cout<<endl;

    }
    
    return 0;
}