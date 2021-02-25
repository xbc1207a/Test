#include<iostream>

using namespace std;

int main()
{
    int a[]={6,7,8,9,10};
    int* p=a;

    *(p++)+=123;

    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    *(++p)+=123;

    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"Hello Test"<<" Test 15"<<endl;

    cout<<"Add in branch"<<endl;

    cout<<"Hi CPP"<<endl;

    return 0;
}
