#include <bits/stdc++.h>
using namespace std;

void MoveZeroes(int arr[],int n)
{
int i=0;
for(int j=0;j<n;j++)
{
    if(arr[j]!=0){
        swap(arr[j],arr[i]);
        i++;
    }
}
}
 void print(int arr3[],int n)
      {
        for(int i=0;i<n;i++)
        cout << arr3[i]<<" ";
      }
int main()
      {
        int arr1[5]={0,3,5,7,9};
        MoveZeroes(arr1,5);
        print(arr1,5);
        return 0;
      }
        
