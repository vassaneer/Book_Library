#include "data_include.h"
#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<cstdlib>
#include<iomanip>
#include <stdio.h>
#include <time.h>

using namespace std;

int DatabaseApi::check_login(string name_input, string pass_input) {
	ifstream soure("Data.txt");
	string textline;
	char format[27] = { "%d,%[^,],%[^:]:%f,%[^,],%d" };
	while (getline(soure, textline)) {
		int loc1= textline.find_first_of(',');
		int loc2 = textline.find_first_of(',', loc1+ 1);
		int loc3 = textline.find(':', loc2 + 1);
		this->name = textline.substr(loc1+ 1, loc2 - loc1- 1);
		this->pass = textline.substr(loc2 + 1, loc3 - loc2 - 1);
		// this->book_seat_yet=textline.substr();
		cout << textline << endl;
		if (this->name == name_input) {
			if (this->pass == pass_input) return 1;
			else return 2;
		}
	}
	return 0;
};

bool DatabaseApi::check_register(int student_id_input) {
	ifstream soure("Data.txt");
	string textline;
	char format[27] = { "%d,%[^,],%[^:]:%f,%[^,],%d" };
	while (getline(soure, textline)) {
		int loc1 = textline.find_first_of(',');
		this->id = atof(textline.substr(0, loc1).c_str());
		if(this->id==student_id_input)return true;
	}return false;
}

DatabaseApi::~DatabaseApi() {

}
DatabaseApi::DatabaseApi() {
}

void DatabaseApi::AddData(int id, string name, string pass) {
	ofstream Add_data("Data.txt",ios::app);
	Add_data << endl << id << ","<< name << "," << pass << ":00.00,"<< currentDateTime() <<", 100";
	Add_data.close();
}

string DatabaseApi::currentDateTime() {
	time_t     now = time(0);
	struct tm  tstruct;
	char       buf[80];
	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);
	return buf;
}