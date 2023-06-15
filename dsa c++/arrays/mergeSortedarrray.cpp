//so basically 2 arrays are given and we merge it in 3RD array
//we will take 2 arrays and merge them in 3rd one
//making function of merge
//we'll make 2 cond , agr 1st arr phle khtm hua ya fir 2nd wala 

# include<bits/stdc++.h>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m,int arr3[])
{
    int i=0,j=0,k=0;
    while (i<n&&j<m)   //this loop will work till both arrays are equal
    {
        if(arr1[i]<arr2[j]) 
        {
            arr3[k]=arr1[i];    //put smaller in 3rd array
            k++;i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;j++;
        } }
while(i<n)    //if 1st arr is bigger
{
    arr3[k]=arr1[i];
    k++;i++;
}
while(j<n)
{
arr3[k]=arr2[j];
j++;k++;
}
}
      void print(int arr3[],int n)
      {
        for(int i=0;i<n;i++)
        cout << arr3[i]<<" ";
      }
      int main()
      {
        int arr1[5]={1,3,5,7,9};
        int arr2[3]={2,4,6};
        int arr3[8]={0};
        merge(arr1,5,arr2,3,arr3);
        print(arr3,8);
        return 0;
            }      
    



