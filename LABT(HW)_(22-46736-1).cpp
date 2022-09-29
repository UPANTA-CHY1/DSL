#include<iostream>
using namespace std;
int main()
{
    int A[10]={4,1,3,3,4,2,1,6,2,3};
    int x;
    cout<<"Please take an input to search : " ;
    cin>>x;
    int n=0;
    for(int i=0;i<10;i++)
    {
        if(x==A[i])
            n++;
    }
    cout<<"input "<<x<<" Occur "<<n<<" times ";
}

