#include<iostream>
using namespace std;
int main()
{
     int i,size,sum=0,a[10];        //what is subarray
     /* suppose a[]={1,2,3} then subarray wrt i=0 [{1},{1,2},{1,2,3}]
     now for i=1 [{2},{2,3}] and so on.....                  */
    cout<<"size= ";                
    cin>>size;
    cout<<"enter elements: ";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<size;i++)   //logic starts
    {
        sum=0;    //making sum=0 for next iteration 
        for(int j=i;j<size;j++)
        {
            sum=sum+a[j];
            cout<<sum<<" ";
        }
    }
    return 0;
}