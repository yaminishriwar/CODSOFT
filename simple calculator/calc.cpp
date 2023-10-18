#include<iostream>
#include<conio.h>
using namespace std;


main(){
    while (true)
    {
        int a,b;
        char operand;
        cout<<"**CALCULATE ME**"<<endl;
        
            
        
        start:
        cout<<"Enter number a: ";
        cin>>a;
        cout<<"Enter number b: ";
        cin>>b;
        cout<<"Press 1 for addition : "<<endl;
        cout<<"press 2 for subtraction: "<<endl;
        cout<<"Press 3 for addition: "<<endl;
        cout<<"press 4 for subtraction: "<<endl;
       operand=getch();
system("CLS");
        switch (operand)
        {
        case '1':
            cout<<"The sum of a and b is : "<<a+b<<endl;
            goto start;

            case '2':
            cout<<"The subtraction of a and b is : "<<a-b<<endl;
             goto start;

            case '3':
            cout<<"The multiplication of a and b is : "<<a*b<<endl;
             goto start;

            case '4':
            cout<<"The division of a and b is : "<<a/b<<endl;
             goto start;
        
        default:
            break;
        }
       
       
        
        }
    }
    
