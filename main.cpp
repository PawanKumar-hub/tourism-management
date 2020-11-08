#include<iostream>
#include<bits/stdc++.h>
#include<windows.h>
#include"destination.h"
#include"hotels.h"
#include"restaurants.h"
#include"transport.h"
#include"tourist.h"
#include"sqlite3.h"
using namespace std;

int options(string a, tourist &t1)
{
   system("clear");
   t1.details(a);
    do{
        char choice;
        cout<<"\n\nEnter the option Number you want to see details in the city "<< a << "\n";
        cout<<"1. Hotels Available\n";
        cout<<"2. Restaurants Available\n";
        cout<<"3. Transport Available\n";
        cout<<"4. To exit \n\t";
        cin>>choice;
       
        switch(choice)
        {
            case '1': t1.showhoteldata();break;
            case '2': t1.showrestaurantdata();break;
            case '3': t1.showtransportdata();break;
            case '4':  cout<<"\nThankyou for your visit, more details will be sent on mail or phoneno";
                       Sleep(10000);
                       return 0;
            
            default : cout<<"Wrong Input \n";
        }

        // cout<<"Press any Key to continue and enter\n";
        // int temp;cin>>temp;cin>>ws;
        //system("CLEAR");

    }while(1);
}

int main()
{
    tourist t1;

    while(1)
    {
        if(t1.login())
        break;
        else
        {
            cout<<"\nOops wrong email or phone no format, "<<endl;
            cout<<"\nEnter anything if you want to enter details again please otherwise '1' if you want to exit"<<endl;
            string option ;
            getchar();
            getline(cin,option);
            if(option=="1")
            return 0;
        }
    }
    system("clear");
    cout<<"WELCOME "<<t1.name<<endl;
    
    
        char choice;
        cout<<"Which city would you like to visit \n";
        cout<<"1. Delhi \n";
        cout<<"2. Mumbai\n";
        cout<<"3. Chennai\n";
        cout<<"4. Bangaluru\n";
        cout<<"5. Exit \n";
        cin>>choice;
       
        switch(choice)
        {
            case '1': options("Delhi",t1); break;
            case '2': options("Mumbai",t1); break;
            case '3': options("Chennai",t1); break;
            case '4': options("Bangaluru",t1); break;
            case '5': return 0;
            
            default : cout<<"Wrong Input \n";
        }

        // cout<<"Press any Key to continue and enter\n";
        // int temp;cin>>temp;cin>>ws;
        //system("CLEAR");

  return 0;
}