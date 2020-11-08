#ifndef _transport_inc_h_  //have to write dont know why

#define _transport_inc_h_  //

#include<iostream>
#include"destination.h"
using namespace std;


class transport: virtual public destination
{
public:  //will change
string vehicletype;
float priceperkm;

public:
void showtransportdata();
void inputnoutput(string, float);

};

#endif
