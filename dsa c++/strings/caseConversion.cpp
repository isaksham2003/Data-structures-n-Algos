#include<iostream>
#include<string>
using namespace std;
int main()//lowercase to uppercase and uppercase to lowercase 
{
    string s;
    cout<<"enter string"<<endl;
    getline(cin,s);
    
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]>='A'&&s[i]<='Z')//upper to lower
        s[i]=s[i]+32;
        else if(s[i]==' ')//spaces
        s[i]=32;
        else if (s[i]>='a'&&s[i]<='z')//lower to upper
        s[i]=s[i]-32;
    }
    cout<<s;
    return 0;
}

    