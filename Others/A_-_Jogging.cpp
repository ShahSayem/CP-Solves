#include <iostream>
using namespace std;

void solve()
{
    long long a, b, c, d, e, f, x, t1, t2;
    cin>>a>>b>>c>>d>>e>>f>>x; 

    t1 = a;
    t2 = d;
    for (int i = 1; t1 <= x; i++){
        b *= i;
        if (i%a == 0){
            t1 += c;
        }
    }

    for (int i = 1; t2 <= x; i++){
        e *= i;
        if (i%d == 0){
            t2 += f;
        }
    }
    
    if (b > e){
        cout<<"Takahashi";
    }
    else if (b < e){
        cout<<"Aoki";
    }
    else{
        cout<<"Draw";
    }
    
}
int main()
{
    solve();
    cout<<endl;     
    
    return 0;
}
    