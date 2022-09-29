#include<iostream>
using namespace std;

int main()
{
    int ARRAY[3]={1,5,7};
    cout<<"The Array is : ";
    for(int i=0;i<3;++i)
        cout<<ARRAY[i]<<"  ";

    cout<<"\n Array With Unique Elements are : ";
    for(int i=0;i<5;i++)
    {
        int a;
        for(a=0;a<i;a++)
        {
            if(ARRAY[i]==ARRAY[a])
            {
                break;
            }
        }
        if (i == a)
            cout<<ARRAY[i]<<" ";
    }
    return 0;
}
