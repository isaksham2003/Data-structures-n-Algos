#include<iostream> /*unique no. is one which is present in 
  an array with no repetions while all the other elements 
  present are repeated*/
  using namespace std;
  int main()
  {
  int n,i,a[10000];
  cout<<"enter size of array";
  cin>>n;
  cout<<endl<<"enter elements in array";
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int ans=0;        //logic starts
  for(i=0;i<n;i++)
  {
    ans=ans^a[i];   // xor used a^a=0 sab 0 ho jayege aur jo repeated ni hoga vo bachega
  }
   cout<<ans;  
  return 0;
  }

