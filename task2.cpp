#include<iostream>
using namespace std;
int main()
{
    int arr[]= {2,4,5,7,9,11,14,19,20,25,29,34,37,41,61,100};
    cout<<"Even Number: ";
    for(int i=0; i<13; i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i]<<"\t";
        }
    }

    cout<<"\nOdd Number: ";
    for(int i=0; i<13; i++)
    {
        if(arr[i]%2!=0)
        {
            cout<<arr[i]<<"\t";
        }
    }

}

