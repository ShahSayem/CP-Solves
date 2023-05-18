#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    cout<<"Tasks:"<<endl<<"1. CP Contest"<<endl<<"2. Final Exam"<<endl;
    cout<<"Enter your option: ";

    int task;
    cin>>task;
    switch (task)
    {
    case 1:
        cout<<endl<<"Pora lekha ak side e, contest amar arek side e"<<endl;
        break;
    case 2:
        cout<<endl<<"Shomoy nai, porte bosh"<<endl;
        break;
    
    default:
        cout<<endl<<"Apnake to chinlam na!"<<endl;
        break;
    }    
    return 0;
}