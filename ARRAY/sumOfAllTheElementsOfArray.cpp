#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"sum is : "<<sum;
    
    
    
    return 0;
}