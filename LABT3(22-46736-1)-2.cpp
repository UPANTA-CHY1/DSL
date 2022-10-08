#include<iostream>
using namespace std;
int main()
{

    int x,temp;
    string ARR;

    cout<<"Enter the Sentence: ";
    getline(cin,ARR);

    cout<<"the Sentence is : ";
    cout<<"\n";

    for(int i=0; i<ARR.size(); i++)
        cout<<ARR[i];

    cout<<"Enter The Number of Changing Value: ";
    cout<<"\n";
    cin>>x;

    for(int i=2;i<ARR.size();i+=3)
    {
        temp=ARR[i];
        ARR[i]=char(temp+x);

    }
    cout<<"Changed Sentence : ";
    cout<<"\n";

    for(int i=0;i<ARR.size();i++)
        cout<<ARR[i];


}
