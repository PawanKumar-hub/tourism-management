#include"transport.h"
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


static int callback(void *unused, int count, char **data, char **columns)
{
    transport* ptr= (transport*)unused;
    string transportname= data[0];
    float price = atof(data[1]);

    ptr->inputnoutput(transportname , price);
    
    return 0;
}

void transport::showtransportdata()
{
    sqlite3 * db;
    int exit = sqlite3_open("tourism.db",&db); // location of database and address of pointer to store db
    
    string sql = "select * from transport_table where location = '"+this->name+"';" ; //sql command to be executed;
    sqlite3_exec(db,sql.c_str(),callback,this,NULL);  //c_str convert string to char*
}


void transport::inputnoutput(string transportname, float price)
{
    this->vehicletype= transportname;
    this-> priceperkm = price;
    cout<<"\n";
    cout<<"Type of vehicle: "<<this->vehicletype<<"\t Price per km: "<<this->priceperkm<<endl;

}