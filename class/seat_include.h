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
class SeatApi {
private:
	string *hor = new string[6]; //Arrays name of hor
	int seat[6][6][6][24]; //Check seat in each hor 
	int sum_check_seat[6][6][6] = {};
public:
	SeatApi(int, int);
	SeatApi(int);
	SeatApi();
	int empty_seat[6] = {};
	void arrange_seat_hor(int, int); //not fixed
	void book_seat(int, int, int, int, int); // book seat in hor
	void clear_book();
	string *get_hor();
	bool check_seat(int ,int);
	void update();
	void setzero();
	void choose_hor(int);
};
#endif
