#include <iostream> //iostream
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    if (t < 100){
        cout<<"No";
    }
    else if (t%100 == 0) {
        cout<<"Yes";
    }
    else {
       cout<<"No"; 
    }
return 0;
}