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
    public:   
		int id_confirm;
		int check_login(string ,string); 
		bool check_register(int);
		void AddData(int, string, string);
        int book_yet(int); //single to check is possible to book
        //bool group_book(); //group to check is possinle to book 
        void set_book(int);
        //void set_group_book();
		DatabaseApi();
		~DatabaseApi();
		string currentDateTime();
};
#endif