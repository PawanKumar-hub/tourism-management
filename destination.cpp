#include "destination.h"


    /*  unused - 
     count - The number of columns in the result set
     data - The row's data
     columns - The column names */

static int callback(void *unused, int count, char **data, char **columns)
{
    destination* ptr= (destination*)unused;
    ptr->inputnoutput(data[0],data[1]);
    return 0;
}

void destination::showrecord(string a)
{
    cout<<"\nThe city "<< a << " has the following tourist destinations";
    sqlite3 * db;
    int exit = sqlite3_open("tourism.db",&db); // location of database and address of pointer to store db
    
    string sql = " select * from Destination_table where name = '"+a+"';" ; //sql command to be executed;
    sqlite3_exec(db,sql.c_str(),callback,this,NULL);  //c_str convert string to char*

}


void destination::inputnoutput(string name , string info)
{
    this-> name= name;
    this-> tourist_loc = info;
    cout<< "\n"<<this->tourist_loc;
}