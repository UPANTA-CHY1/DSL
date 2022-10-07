
#include <iostream>
using namespace std;

int main()
{
    cout<<" Take a matrix and output its transpose."<<endl;

    cout<<"\n";

    int a[10][10], transpose[10][10], row, column, x, y;

    cout<<"Enter The Row Size Of The Matrix: ";
    cin>>row;

    cout<<"\n";

    cout<<"Enter The Column Size Of The Matrix: ";
    cin>>column;

    cout<<"\n";

    cout<<"Enter elements of matrix." << endl;

    cout<<"\n";

    //Inputing Matrix Elements

    for(x=0; x< row; x++)
    {
        for(y=0; y < column; y++)
        {
            cout<<"Enter Element For A[" << x + 1<<"]["<< y + 1 << "]: ";

            cin>>a[x][y];
        }
    }

    cout<<"\n";

    //Printing The Matrix

    cout<<"The Matrix Is: "<<endl;

    cout<<"\n";

    for (x=0; x < row; x++)
    {
        for (y=0; y< column; y++)
        {
            cout<<"\t"<<a[x][y];

            if (y==column - x)
            {
                cout<<endl;
            }
        }
    }



    for(x=0; x < row; x++)
    {
        for(y=0; y < column; y++)
        {
            transpose[y][x] = a[x][y];
        }
    }



    cout<<"\n";

    cout<<"Transpose Of The Matrix: "<<endl;

    cout<<"\n";

    for(x=0; x < column; x++)
    {
        for(y=0; y < row; y++)
        {
            cout <<"\t"<<transpose[x][y];

            if (y==row - 1)
            {
                cout<<endl;
            }
        }
    }

    return 0;
}
