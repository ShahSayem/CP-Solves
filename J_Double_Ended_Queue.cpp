#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){ 
        cout<<"Case "<<i<<":"<<"\n";
        int n,m;
        cin>>n>>m;
        deque<int>v;
        while(m--){
            int cnt=0;
            string s;
            cin>>s;
            if(s=="pushLeft"){
                int x;
                cin>>x;

                if(v.size()!=n){
                v.push_front(x);
                cout<<"Pushed in left: " <<x<<"\n";
                }
                else cout<<"The queue is full"<<"\n";
            }
            else if(s=="pushRight")
            {
                int x;
                cin>>x;
                if(v.size()!=n){
                v.push_back(x);
                cout<<"Pushed in right: " <<x<<"\n";
                }
                else cout<<"The queue is full"<<"\n";
            }
            else if (s=="popLeft" && v.size()!=0){
                cout<<"Popped from left: "<<v.front()<<"\n";
                v.erase(v.begin());
            }    
            else if (s=="popLeft" && v.size()==0)
                cout<<"The queue is empty"<<"\n";
            else if(s=="popRight" && v.size()!=0){
                cout<<"Popped from right: "<<v.back()<<"\n";
                v.erase(v.end());
            }
            else if (s == "popRight" && v.size()==0)
                cout<<"The queue is empty"<<"\n";
        }
    }

   return 0;
}
