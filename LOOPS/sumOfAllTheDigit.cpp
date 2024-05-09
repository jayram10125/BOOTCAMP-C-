#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    system("cls");
    int n,r,riverse=0;
    cout<<"enter any number : ";
    cin>>n;
    int p=n;
    while(n!=0)
    {
        r=n%10;
        riverse=riverse*10+r;
        n=n/10;
    }
    //cout<<"riverse is : "<<riverse;
    if(p==riverse)
    cout<<"palindrome";
    else
    cout<<"not palindrome";
    return 0;
}