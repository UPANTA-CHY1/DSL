#include<iostream>
using namespace std;

int arr[]= {1,2,4,5,6,7,9};
int i;
void oddFinder(int x, int y)
{
    cout<<"\nOdd Numbers: ";
    for(arr[i]=x; arr[i]<=y; i++)
    {
        if(arr[i]%2!=0)
        {
            cout<<arr[i]<<"  ";
        }

    }
    cout<<"\n";

}

int main()
{
    int x,y;
    cout<<"Enter First Value: ";
    cin>>x;
    cout<<"Enter Last Value: ";
    cin>>y;
    oddFinder(x,y);

    return 0;

}



