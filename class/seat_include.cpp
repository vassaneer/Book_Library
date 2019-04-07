#include "seat_include.h"
#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<cstdlib>
#include<iomanip>
#include <stdio.h>
#include <time.h>
#include <algorithm>
using namespace std;

SeatApi::SeatApi(int start, int end) {
	ifstream seat_txt("seat.txt");
	string textline;
	int text_index = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int f = 0;
	int sum = 0;
	while (getline(seat_txt, textline)) {
		int loc1 = textline.find_first_of(':');
		this->hor[i] = textline.substr(0, loc1);
		text_index = loc1 + 1;
		while (j <= 5) {
			while (textline[text_index] != '%') {
				text_index++;
				while (textline[text_index] != ']') {
					this->seat[i][j][k][f] = textline[text_index] - '0';
					f++;
					text_index += 2;
				}
				f = 0;
				k++;
				text_index += 2;
			}
			k = 0;
			j++;
			text_index += 2;
		}
		k = 0;
		j = 0;
		i++;
	}
	seat_txt.close();
	arrange_seat_hor(start, end);
	update();
	ofstream add("Temp_Time.txt");
	add << start << "," << end;
	add.close();
};

SeatApi::SeatApi(int hor) {
	ifstream seat_txt("seat.txt");
	string textline;
	int text_index = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int f = 0;
	int sum = 0;
	while (getline(seat_txt, textline)) {
		int loc1 = textline.find_first_of(':');
		this->hor[i] = textline.substr(0, loc1);
		text_index = loc1 + 1;
		while (j <= 5) {
			while (textline[text_index] != '%') {
				text_index++;
				while (textline[text_index] != ']') {
					this->seat[i][j][k][f] = textline[text_index] - '0';
					f++;
					text_index += 2;
				}
				f = 0;
				k++;
				text_index += 2;
			}
			k = 0;
			j++;
			text_index += 2;
		}
		k = 0;
		j = 0;
		i++;
	}
	seat_txt.close();
	choose_hor(hor);
}

SeatApi::SeatApi() {
	ifstream seat_txt("seat.txt");
	string textline;
	int text_index = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int f = 0;
	int sum = 0;
	while (getline(seat_txt, textline)) {
		int loc1 = textline.find_first_of(':');
		this->hor[i] = textline.substr(0, loc1);
		text_index = loc1 + 1;
		while (j <= 5) {
			while (textline[text_index] != '%') {
				text_index++;
				while (textline[text_index] != ']') {
					this->seat[i][j][k][f] = textline[text_index] - '0';
					f++;
					text_index += 2;
				}
				f = 0;
				k++;
				text_index += 2;
			}
			k = 0;
			j++;
			text_index += 2;
		}
		k = 0;
		j = 0;
		i++;
	}
	seat_txt.close();
	ifstream check("Temp_Time.txt");
	string line;
	getline(check, line);
	int start = atoi(line.substr(0,1).c_str());
	int end= atoi(line.substr(2, 1).c_str());
	arrange_seat_hor(start,end);
}

void SeatApi::arrange_seat_hor(int index_start, int index_end) {
	int get_empty = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			for (int k = 0; k < 6; k++) {
				for (int f = index_start; f < index_start + (index_end - index_start); f++) {
					get_empty += seat[i][j][k][f];
				}
				if (get_empty == 0) {
					empty_seat[i]++;
				}
				else {
					sum_check_seat[i][j][k]++;
				}
				get_empty = 0;
			}
		}
	}
	bool flag = false;
	for (int i = 0; i < 6; i++) {
		flag = false;
		for (int j = 0; j < 5; j++)
			if (this->empty_seat[j] < this->empty_seat[j + 1]) {
				swap(this->empty_seat[j], this->empty_seat[j + 1]);
				swap(this->hor[j], this->hor[j + 1]);
				swap(this->seat[j], this->seat[j + 1]);
				swap(sum_check_seat[j], sum_check_seat[j + 1]);
				flag = true;
			}
		if (!flag) break;
	}
};

void SeatApi::book_seat(int j, int k) {
	ofstream add("Confirm_seat.txt");
	add << j<<","<<k;
	add.close();
};

void SeatApi::update() {
	ofstream seat_update("seat.txt");
	for (int i = 0; i < 6; i++) {
		seat_update << hor[i] << ":";
		for (int j = 0; j < 6; j++) {
			for (int k = 0; k < 6; k++) {
				seat_update << "[";
				for (int f = 0; f < 24; f++) {
					seat_update << this->seat[i][j][k][f] << ',';
				}
				seat_update << "],";
			}
			seat_update << "% ";
		}
		seat_update << endl;
	}
	seat_update.close();
};

void SeatApi::setzero() {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			for (int k = 0; k < 6; k++) {
				for (int f = 0; f < 24; f++) {
					this->seat[i][j][k][f] = 0;
				}
			}
		}
	}
};

string *SeatApi::get_hor() {
	return hor;
}

bool SeatApi::check_seat(int j,int k) {
	ifstream check("Temp_seat.txt");
	string line;
	getline(check, line);
	int hor = atoi(line.c_str());
	if (sum_check_seat[hor][j][k] == 0) {
		return true;
	}
	else {
		return false;
	}
}
  
void SeatApi::choose_hor(int hor) {
	ofstream add("Temp_seat.txt");
	add << hor;
	add.close();
}

void SeatApi::confirm_book(){
	ifstream check_time("Temp_Time.txt");
	string line;
	getline(check_time, line);
	int start = atoi(line.substr(0,1).c_str());
	int end= atoi(line.substr(2, 1).c_str());
	check_time.close();
	ifstream check("Temp_seat.txt");
	getline(check, line);
	int hor = atoi(line.c_str());
	check.close();
	ifstream confirm("Confirm_seat.txt");
	getline(confirm, line);
	int table = atoi(line.substr(0,1).c_str());
	int seat= atoi(line.substr(2, 1).c_str());
	confirm.close();
	for (int f = start; f < start + (end - start); f++) {
		this->seat[hor][table][seat][f] = 1;
	}
	arrange_seat_hor(start, end);
	update();
}