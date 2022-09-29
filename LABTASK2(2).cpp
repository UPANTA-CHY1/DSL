#include<iostream>
using namespace std;
int main()
{
    int ARRAY1[4];
    int ARRAY2[3];
    int ARRAY3[5];

    cout<<"Put your elemets for first array : "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>ARRAY1[i];
    }
    cout<<"Put your elements for second array : "<<endl;
    for(int i=0;i<3;i++)
    {
        cin>>ARRAY2[i];
    }

    int j=0;
    for(int i=0;i<5;i++)
    {
        if(i<5)
        {
            ARRAY3[i]=ARRAY1[i];
        }
        else
        {
            ARRAY3[i]=ARRAY2[j];
            j++;
        }
    }
    cout<<"Output in reverse order : "<<endl;
    for(int i=5;i>=0;i--)
    {
        cout<<ARRAY3[i]<<" ";
    }
   return 0;
}
