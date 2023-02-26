#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=32001+1;
vector<<vector<ll>> g(N,vector<ll>(N));

int main()
{
    int mid=512032000,row,col,c=0;
    for(int i=1;i<N; ++i)
    {
        for(int j=1;j<N; ++j)
        {
            ++c;
            if(c==mid)
            {
                row=i,col=j;
                break;
            }
        }
    }
    cout<<row<<" "<<col<<endl;
}
