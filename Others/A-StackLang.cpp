#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int mx=1e6;

void solve()
{
    int rev = 0;
    string s;
    ll sum = 0,tp = -1;
    deque<int>dq;

    while(cin>>s){
        if(s=="PUSH" ){
            int v;
            cin>>v;

            if(rev==0){
                if(dq.size()<mx){
                    dq.push_back(v);
                    sum+=v;
                }
                else{
                    sum-=dq.front();
                    dq.pop_front();
                    dq.push_back(v);
                    sum+=v;
                }
            }
            else if(rev==1){
                if(dq.size()<mx){
                    dq.push_front(v);
                    sum+=v;
                }
                else{
                    sum-=dq.back();
                    dq.pop_back();
                    dq.push_front(v);
                    sum+=v;
                }
            }
        }    
        else if(s=="POP"){
            if(dq.size()>=1 ){
                if(rev==0){
                    sum-=dq.back();
                    dq.pop_back();
                }
                else{
                    sum-=dq.front();
                    dq.pop_front();
                }
            }
        }
        else if(s=="REVERSE"){
            if(rev==0)
                rev=1;
            else 
                rev=0;
        }
        else if(s=="PRINT"){
            if(!dq.empty()){
                if(rev==0)  
                    cout<<dq.back()<<endl;
                else 
                    cout<<dq.front()<<endl;
            }
            else 
                cout<<"-"<<endl;
        }
        else if(s=="SIZE"){
            cout<<dq.size()<<endl;
        }
        else if(s=="SUM"){
            cout<<sum<<endl;
        }
        else if(s=="REPEAT"){
            int m;
            cin>>m;

    
            while(dq.size() < mx && m--){
                int cnt = 1;

                if(rev==0){
                    while (dq.size()<mx){
                        int sz = dq.size();
                        dq.push_front(dq[sz-cnt]);
                        sum += dq[sz-cnt];
                        cnt++;
                    }
                }
                else{
                    while(dq.size()<mx){
                        int sz = dq.size();
                        dq.push_back(dq[sz-cnt]);
                        sum+=dq[sz-cnt];
                        cnt+=2;
                    }
                }
            }
        }
    }
}

int main()
{
    solve();
}





