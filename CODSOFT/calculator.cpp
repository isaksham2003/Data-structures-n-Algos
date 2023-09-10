#include<bits/stdc++.h>
using namespace std;
void result(char c)
{
int r,a,b;
cout<<"Enter Two Numbers: ";
cin>>a>>b;
switch (c)
{
case '+':
    r=a+b;
    break;
    case '-':
    r=a-b;
    break;
    case '*':
    r=a*b;
    break;
    case '/':
    r=a/b;
    break;
default:
cout<<"invalid operator";
    break;
}
cout<<"Result is: "<<r;
}
int main()
{
    cout<<"WELCOME TO SIMPLE CALCULATOR "<<endl;
    char c;
    cout<<"ENTER THE OPERATION U WANT TO PERFORM: ";
    cin>>c;
result(c);
return 0;
}