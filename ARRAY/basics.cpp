#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];//={0,1,2,3,4,5,6,7,8,9};
    // cout<<arr[8]<<endl;
    // cout<<arr[5]<<endl;
    // arr[5]=15;
    // cout<<arr[5];
    cout<<"enter the elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"output is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
    return 0;
}