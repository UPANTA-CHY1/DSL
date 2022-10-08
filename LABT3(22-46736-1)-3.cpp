#include <iostream>
using namespace std;

struct employee
{
    int employeeID;
    int employeeJY;
    int employeeSAL;
};

int main()
{

    //cout<<"Question 3 - Write a program with appropriate data structure to keep records of 10 employees."<<endl;
    cout<<"    Each employee will have the following information: "<<endl;
    cout<<"      1. Unique ID (you can use integer for this)."<<endl;
    cout<<"       2. Joining Year."<<endl;
    cout<<"      3. Salary."<<endl;
    cout<<"       Print all the employees’ ID whose has joined before 2009."<<endl;
    cout<<"           Print all the employees’ ID who has salary more than 20,000."<<endl;

    cout<<"\n";

    struct employee e[10];
    int i, x=0;

    for(i=0; i<10; i++)
    {
        cout<<"Please Enter The Information Of " <<(i + 1)<< "th Number Employee"<<endl;

        cout<<"Employee ID: ";

        cin>>x;

        if((x>= 0) && (x<= 10))
        {
            e[i].employeeID = x;

            cout<<"Employee Joining Year: ";

            cin>>e[i].employeeJY;

            cout<<"Employee Salary: ";

            cin>>e[i].employeeSAL;
        }

       cout<<endl;
   }

    cout<<"\n";

    cout<<"Employees’ ID Whose Has Joined Before 2009: "<<endl;

    for(i=0;i<10;i++)
    {
        if(e[i].employeeJY < 2009)
        {
            cout<<e[i].employeeID<<endl;
        }
    }

    cout<<"\n";

    cout<<"Employees’ ID Who Has Salary More Than 20,000: "<<endl;
    for(i=0; i<10; i++)
    {
        if(e[i].employeeSAL > 20000)
        {
            cout<<e[i].employeeID<<endl;
        }
    }

    cout<<endl;

    return 0;
}

