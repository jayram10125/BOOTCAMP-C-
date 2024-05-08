#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    system("cls");
    int m;
    cout<<"enter marks : ";
    cin>>m;
    if(m<=100 && m>90)
    {
        cout<<"v.v.v good";
    }
    else if(m<=90 && m>80)
    {
        
        cout<<"v.v good";
    }
    else if(m<=80 && m>70)
    {
        cout<<"v.good";
    }
    else if(m<=70 && m>60)
    {
        cout<<"good";
    }
    else if(m<=60 && m>50)
    {
        cout<<"2nd";
    }
    else if(m<=50 && m>40)
    {
        cout<<"3rd";
    }
    else 
    {
        cout<<"fail";
    }

    return 0;
}