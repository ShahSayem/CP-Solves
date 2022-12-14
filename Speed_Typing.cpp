#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j = 1; j <= t; j++){
        int ct = 0;
        string i, p;
        cin>>i;
        cin>>p;
        if(i.size() > p.size()){
            cout<<"Case #"<<j<<": IMPOSSIBLE"<<endl;
        }
        else{
            char c = 'A';
            bool check = true;
            while(c <= 'z'){
                int A = count(i.begin(), i.end(), c);
                int B = count(p.begin(), p.end(), c);

                if(A < B){
                    ct += (B-A);
                }
                else if(A > B){
                    cout<<"Case #"<<j<<": IMPOSSIBLE"<<endl;
                    check = false;
                    break;
                }
                c++;
            }
            if(check){
                cout<<"Case #"<<j<<": "<<ct<<endl;
            }
        } 
    }
    return 0;
}
