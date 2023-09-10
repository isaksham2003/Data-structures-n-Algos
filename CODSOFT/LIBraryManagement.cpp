#include <bits/stdc++.h>
using namespace std;

class Library{
public:
int id;
char name[100];
char author[100];
int price;
int pages;
};

int main(){
 Library lib[10];
 int input=0;
 int count=0;

 while(input!=5)
 {
    cout<<"Enter 1 for id,name,author,price,pages"<<endl;
    cout<<"Enter 2 to display information"<<endl;
    cout<<"Enter 3 to exit"<<endl;
    cin>>input;

   switch (input)
   {
   case 1:
   start:
   cout<<"Enter id:"<<endl;
   cin>> lib[count].id;
   cout<<"Enter book name:"<<endl;
   cin.getline(lib[count].name,100,'.');
    cout<<"Enter author:"<<endl;
    cin.getline(lib[count].author,100,'.');
    cout<<"Enter price:"<<endl;
    cin>>lib[count].price;
    cout<<"Enter pages :"<<endl;
    cin>>lib[count].pages;
    count++;
    break;

   case 2:
    for(int i=0;i<count;i++)
    {
        cout<<"Book id is "<<lib[i].id<<endl;
        cout<<"Your name is "<<lib[i].name<<endl;
        cout<<"Author name is "<<lib[i].author<<endl;
        cout<<"price is "<<lib[i].price<<endl;
        cout<<"pages = "<<lib[i].pages<<endl;
    }
    break;

    case 3:
    exit(0);

   default:
   cout<<"Wrong input :("<<endl;
   goto start;
    break;

   }
 }
}
