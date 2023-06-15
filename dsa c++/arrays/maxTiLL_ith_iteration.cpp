#include<iostream>
using namespace std;
int main()
{
    int mx=-999999;
    int i,size,a[10];
    cout<<"size= ";
    cin>>size;
    cout<<"enter elements: ";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<size;i++)
    {
        mx=max(mx,a[i]);
        cout<<mx<<" ";
    }
    return 0;
}

