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
    cout<<"reverse \n";
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<endl;
    }
    
    
    return 0;
}