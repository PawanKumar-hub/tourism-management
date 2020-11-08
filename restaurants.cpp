#include"restaurants.h"
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


static int callback(void *unused, int count, char **data, char **columns)
{
    restaurants* ptr= (restaurants*)unused;
    string restaurantname= data[0];
    string foodtype = data[1];

    ptr->inputnoutput(restaurantname , foodtype);
    
    return 0;
}

void restaurants::showrestaurantdata()
{
    sqlite3 * db;
    int exit = sqlite3_open("tourism.db",&db); // location of database and address of pointer to store db
    
    string sql = "select * from restaurant_table where location = '"+this->name+"';" ; //sql command to be executed;
    sqlite3_exec(db,sql.c_str(),callback,this,NULL);  //c_str convert string to char*
}


void restaurants::inputnoutput(string restaurantname, string foodtype)
{
    this->rest_name= restaurantname;
    this-> typeoffood = foodtype;
    cout<<"\n";
    cout<<"Restaurant name: "<<this->rest_name<<"\t Type of food: "<<this->typeoffood<<endl;

}