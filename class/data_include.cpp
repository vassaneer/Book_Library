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
	int i=0;
	while (getline(soure, textline)) {
		int loc1= textline.find_first_of(',');
		int loc2 = textline.find_first_of(',', loc1+ 1);
		int loc3 = textline.find(':', loc2 + 1);
		this->name = textline.substr(loc1+ 1, loc2 - loc1- 1);
		this->pass = textline.substr(loc2 + 1, loc3 - loc2 - 1);
		if (this->name == name_input) {
			if (this->pass == pass_input) {
				soure.close();
				ofstream order_id("Temp_OrderId.txt");
				order_id<<i;
				order_id.close();
				ofstream check_book_yet("Temp_BookYet.txt");
				check_book_yet<<textline.substr(textline.size()-1,1);
				check_book_yet.close();
				return 1;
				}
			else {
				soure.close();
				return 2;
				}

		}else{
			i++;
		}
	}
	soure.close();
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
	Add_data << endl << id << ","<< name << "," << pass << ":00.00,"<< currentDateTime() <<",100"<<",0";
	Add_data.close();
}

string DatabaseApi::currentDateTime() {
	time_t     now = time(0);
	struct tm  tstruct;
	char       buf[80];
	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);
	return buf;
};

int DatabaseApi::book_yet(int id){
	ifstream source("Data.txt");
	string line;
	int i = 0;
	while(getline(source,line)){
		int check_id = atoi(line.substr(0 , 9).c_str());
		if (check_id == id) {
			int book_yet_check = atoi(line.substr(line.size() - 1, 1).c_str());		
			if (book_yet_check == 1) {
				return 1;
			}
			else {
				this->id_confirm = i;
				return 2;
			}
		}
		i++;
	}
	return 0;
};

void DatabaseApi::set_book(int id_index){
	ifstream source("Data.txt");
	string line;
	ofstream temp("Temp_Data.txt");
	int i = 0;
	while(getline(source,line)){
		if(i==id_index){
			temp<<line.substr(0,line.size()-1)<<1<<endl;
		}else{
			temp<<line<<endl;
		}
		i++;
	};
	source.close();
	temp.close();
	ofstream source1("Data.txt");
	ifstream temp1("Temp_Data.txt");
	while(getline(temp1,line)){
		source1<<line<<endl;
	}
}

