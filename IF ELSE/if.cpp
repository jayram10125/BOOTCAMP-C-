#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    system("cls");
   char ch;
   cout<<"enter your choice (i.e +,-,*,/) : ";
   cin>>ch;
   int a,b;
   cout<<"enter first number : ";
   cin>>a;
   cout<<"enter second number : ";
   cin>>b;
   if(ch=='+')
   {
    cout<<"addition is : "<<a+b;
   }
   else if (ch=='-')
   {
    cout<<"sub is : "<<a-b;
   }
   else if(ch=='*')
   {
    cout<<"prd is : "<<a*b;
   }
   else if(ch=='/')
   {
    cout<<"div is : "<<a/b;
   } 
   else 
   {
    cout<<"enter valid choice";
   }
    

    return 0;
}