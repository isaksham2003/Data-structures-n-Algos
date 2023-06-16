#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
}
int main()
{
vector<int>a;
int n,element;  //need to take another variable for elements
cout<<"enter size of vector"<<endl;
cin>>n;
cout<<endl<<"enter elements in vector: ";
for(int i=0;i<n;i++)
{
cin>>element;
a.push_back(element);
}
display(a);
return 0;
}
//note-  use cplusplus website to get more basic info ;)
