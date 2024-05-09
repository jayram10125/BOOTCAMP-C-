#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    system("cls");
    int initial,final;
    cout<<"enter initial number : ";
    cin>>initial;
    cout<<"enter final number :";
    cin>>final;
    for(int i=initial;i<=final;i++)
    {
        //if(i%2!=0)
        {
        cout<<i<<" ";
        }
    }
    
    return 0;
}