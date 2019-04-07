//#pragma once
#ifndef DATA_INCLUDE_H
#define DATA_INCLUDE_H
#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;
class DatabaseApi{
    private:
        int id;
        string name;
        string pass;
        float Time;
        string last_time;
        int credit;
        bool book_seat_yet=false;
    public:   
		int check_login(string ,string); 
		bool check_register(int);
		void AddData(int, string, string);
        bool single_book(); //single to check is possible to book
        //bool group_book(); //group to check is possinle to book 
        void set_single_book();
        //void set_group_book();
		DatabaseApi();
		~DatabaseApi();
		string currentDateTime();
};
#endif