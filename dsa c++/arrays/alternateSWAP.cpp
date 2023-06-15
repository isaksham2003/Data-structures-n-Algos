#include<iostream>
using namespace std;
void print(int a[],int size)
{
    for(int i=0;i<size;i++)
    cout<<a[i]<<" ";
}
void swapAlternate(int arr[], int size)
{
    for(int i=0;i<size;i+=2)//for swapping alternate we used i+=2
    {
        if(i+1 <size)
        swap(arr[i],arr[i+1]);//inbuilt function
    }
}
int main(){
    
    int a[5]={4,5,6,3,0};
    swapAlternate(a,5);
    print(a,5);
    return 0;
}