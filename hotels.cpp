#include"hotels.h"
#include<iostream>

using namespace std;
/*
     unused - the pointer passed in 4th arg of sqlite3_exec()
     count - The number of columns in the result set
     data - The row's data
     columns - The column names
*/
static int callback(void *unused, int count, char **data, char **columns)
{
    hotels* ptr= (hotels*)unused;
    string hotelname= data[0];
    string rate = data[1];
    float price= atof(data[2]);

    ptr->inputnoutput(hotelname , rate , price);
    
    return 0;
}

void hotels::showhoteldata()
{
    sqlite3 * db;
    int exit = sqlite3_open("tourism.db",&db); // location of database and address of pointer to store db
    
    string sql = "select * from hotel_table where location = '"+this->name+"';" ; //sql command to be executed;
    sqlite3_exec(db,sql.c_str(),callback,this,NULL);  //c_str convert string to char*
}


void hotels::inputnoutput(string hotelname, string rate, float price)
{
    this->ho_name = hotelname;
    this->rating = rate;
    this-> priceperperson = price;
    cout<<"\n";
    cout<<"Hotelname: "<<this->ho_name<<"\t Rating: "<<this->rating<<"\t Price per person: "<<this->priceperperson<<endl;

}
