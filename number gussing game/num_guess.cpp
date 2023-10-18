#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

main(){
    string player;
    cout<<"\t\t***NUMBER GUSSING GAME***"<<endl;
    cout<<"Enter your name: ";
    cin>>player;
    system("CLS");

   srand(static_cast<unsigned int>(time(0)));

   int secretNumber = rand()%20+1;

   int guess;
   int attempts=0;
   
   cout<<player<<" Welcome to the number guessing game!!! "<<endl;
   cout<<"I have selected a number between 1 to 20"<<endl;

   do
   {
   cout<<"Enter you guess: "<<endl;
   cin>>guess;
   attempts++;

   if (guess<secretNumber)
   {
    cout<<"Too low ! Try Again "<<endl;
   }
   else if (guess>secretNumber)
   {
    cout<<"Too High ! Try Again "<<endl;
   }
   else
   {
    cout<<"Congratulation :) You Won Game!!! in "<<attempts<<" attemps."<<endl;
   }
   
   } while (guess!=secretNumber);
   cout<<"You lost game:( "<<endl;

    }
    
