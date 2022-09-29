#include<iostream>
using namespace std;
int main()
{
    int X[10];
    int Y;
    int n=0;
    cout<<"Array inputs are :" ;
    for(int i=0; i<10; i++)
    {
        cin>>X[i];
    }

    cout<<"Please take an input to search : " ;
    cin>>Y;
    for(int i=0; i<10; i++)
    {
        if(Y==X[i])
            n++;
    }

    cout<<"input "<<Y<<" Occur "<<n<<" times ";

    return 0;
}


