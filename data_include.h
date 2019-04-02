#pragma once
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
		int check_login(string ,string); 
		bool check_register(int);
		void AddData(int, string, string);
		DatabaseApi();
		~DatabaseApi();
		string DatabaseApi::currentDateTime();
};
#endif