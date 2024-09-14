// Write a program to find the product of two numbers using pointers.
#include<iostream>
using namespace std;
int main()
{
    int a ;
    cout<<"Enter a : ";
    cin>>a;

    int b ;
    cout<<"Enter b : ";
    cin>>b;

    int *ptr1 = &a;
    int *ptr2 = &b;

    int ans= (*ptr1)*(*ptr2);
    cout<<ans;
    return 0;
}