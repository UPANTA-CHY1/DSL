#include<iostream>
using namespace std ;

int main ()

{   int i,j;
    int ARRAY1[3]={2,3,6};
    int ARRAY2[4]={5,4,2,1};
    cout<<" Common elements are : ";

    for
        (i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
       {
           if
           (ARRAY1[i]==ARRAY2[j])
           {
               cout<<ARRAY1[i]<<"  ";
           }
       }
    }

    return 0;

}



