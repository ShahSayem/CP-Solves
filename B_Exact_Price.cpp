#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if (n == 0){
        cout<<"No"<<endl;
    }
    else if (n%100 == 0) {
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }
    return 0;
}