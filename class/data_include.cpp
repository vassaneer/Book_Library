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

bool DatabaseApi::single_book(){
	ifstream order_id("Temp_OrderId.txt");
	string line;
	getline(order_id,line);
	int order=atoi(line.c_str());
	order_id.close();
	ifstream source("Data.txt");
	int i=0;
	while(true){
		if(i==order){
			getline(source,line);
			int check_book_yet=atoi(line.substr(line.size()-1,1).c_str());
			if(check_book_yet==0){
				return true;
			}else {
				return false;
			}
		}
		i++;
	}
};

void DatabaseApi::set_single_book(){
	string line;
	ifstream order_id("Temp_OrderId.txt");
	getline(order_id,line);
	int order=atoi(line.c_str());
	order_id.close();
	ifstream source("Data.txt");
	ofstream temp("Temp_Data.txt");
	int i=0;
	while(getline(source,line)){
		cout<<line<<endl;
		if(i==order){
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

