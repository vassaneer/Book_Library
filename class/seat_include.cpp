#include "seat_include.h"
#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<cstdlib>
#include<iomanip>
#include <stdio.h>
#include <time.h>

using namespace std;

SeatApi::SeatApi(){
    ifstream seat_txt("seat.txt");
    string textline;
    int text_index=0;
    int i=0;
    int j=0;
    int k=0;
    while(getline(seat_txt,textline)){
        int loc1= textline.find_first_of(':');
        this->hor[i]=textline.substr(0,loc1);
        text_index=loc1+1;
        while(true){
            if (textline[text_index]=='.'){
                j=0;
                k=0;
                break;
            }
            while(textline[text_index]!='%'){
                this->seat[i][j][k]=textline[text_index]-'0';
                cout<<seat[i][j][k]<<endl;
                k++;
                text_index+=2;
            }
            j++;
            k=0;
            text_index+=2;
        }
        i++;
    }
}

///void 