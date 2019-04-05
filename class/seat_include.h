//#pragma once
#ifndef SEAT_INCLUDE_H
#define SEAT_INCLUDE_H
#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;
class SeatApi{
    private:
        string *hor=new string[6]; //Arrays name of hor
        int seat[6][6][6][24]; //Check seat in each hor 
        int sum_seat[6]={}; //not fixed 
        //bool update =false;  
        //bool hor_isfull[6]; //Arrays of 
    public:
        SeatApi(int,int);
        int empty_seat[6]={};
        void arrange_seat_hor(int ,int ); //not fixed
        void book_seat(int ,int ,int ,int ,int ); // book seat in hor
        string *get_hor();
        void update();
        void setzero();
};
#endif