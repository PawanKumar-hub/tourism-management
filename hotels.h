#ifndef _hotel_inc_h_  //have to write dont know why

#define _hotel_inc_h_  //

#include<iostream>
#include"destination.h"
using namespace std;



class hotels: virtual public destination
{
public:  //will change
string ho_name;
string rating;
float priceperperson;

public:
void showhoteldata();
void inputnoutput(string, string, float);

};

#endif
