#include<iostream>
#include<conio.h>
using namespace std;

struct todo
{
    string task,serial;
};

int total = 0;
todo t[15];

void add(){
    int input=0;

    cout<<"How many tasks do you want to enter :";
    cin>>input;

    for (int i = total; i < total+input; i++)
    {
        cout<<"Enter your task no.";
        cin>>t[i].serial;
        cout<<"Enter your task "<<i+1<<" :";
        cin>>t[i].task;

    }
    total=total+input;
}

void display(){
if (total!=0)
{
    for (int i = 0; i < total; i++)
    {
    
    cout<<t[i].serial<<"."<<t[i].task<<endl;
    }
}

else
{
    cout<<"no task entered";
}

}

void update(){
if (total!=0)
{
    string serno;
        cout<<"Enter the serial no you want to update";
        cin>>serno;
    for (int i = 0; i < total; i++)
    {

        if (t[i].serial==serno)
        {
            cout<<"Previous data :"<<endl;
            cout<<t[i].serial<<" ."<<t[i].task<<endl;

            cout<<"Enter new task";
              cout<<"Enter your task no."<<endl;
        cin>>t[i].serial;
        cout<<"Enter your task "<<i+1<<" :"<<endl;
        cin>>t[i].task;
        break;
        }
        if (i==total-1)
        {
            cout<<"no such record found"<<endl;
        }
        
        
    }
    
}

else{
    cout<<"No data entered"<<endl;
}


}

void dlt(){
if (total!=0)
{
        int pre;
        cout<<"press 1 to delet specific record"<<endl;
        cout<<"press 2 to delet all data"<<endl;
        cin>>pre;
    
  

        if (pre==1)
        {
            string dlt_serial_no;
            cout<<"Enter the serial number which you want to delete"<<endl;
            cin>>dlt_serial_no;
            for (int i = 0; i < total; i++)
            {
                if (t[i].serial==dlt_serial_no)
                {

    cout<<t[i].serial<<" ."<<t[i].task;
    total--;

    cout<<"Your recuired data is deleted:"<<endl;
    break;
                }
 if (i==total-1)
 {
    cout<<"No data found"<<endl;
 }
                
            }
            
        
        
    }

    else if (pre==2)
    {
     cout<<"All Data is deleted"<<endl;
    }
    
    
}
else
{
    cout<<"No recorded data available"<<endl;
}

}
int main(){

    while(1){
        int press;
    cout<<"TO DO LIST"<<endl;
    cout<<"press 1 to enter task :"<<endl;
    cout<<"Press 2 to display all task"<<endl;
    cout<<"press 3 to update tasks"<<endl;
    cout<<"Press 4 to remove task"<<endl;
    cout<<"press 5 to exit"<<endl;
    cin>>press;

    switch (press)
    {
    case 1:
        add();
        break;

         case 2:
        display();
        break;

         case 3:
        update();
        break;

         case 4:
        dlt();
        break;

         case 5:
        exit(0);
        break;


    
    default:
        break;
    }
    }
}