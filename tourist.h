#ifndef _tourist_inc_h_  //have to write dont know why

#define _tourist_inc_h_  //have to write dont know why

#include<iostream>
#include"hotels.h"
#include"restaurants.h"
#include"transport.h"

using namespace std;


class tourist:public hotels, public restaurants, public transport
{
public:
string name;
string email;
string phoneno;
bool login();
void details(string);
};

#endif