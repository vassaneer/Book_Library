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

SeatApi::SeatApi(){
    ifstream seat_txt("seat.txt");
    string textline;
    int text_index=0;
    int i=0;
    int j=0;
    int k=0;
    int sum=0;
    while(getline(seat_txt,textline)){
        int loc1= textline.find_first_of(':');
        this->hor[i]=textline.substr(0,loc1);
        text_index=loc1+1;
        while (j<=5){
            while(textline[text_index]!='%'){
                    this->seat[i][j][k]=textline[text_index]-'0';
                    this->sum_seat[i]+=seat[i][j][k];
                    k++;
                    text_index+=2;
            }
            k=0;
            j++;
            text_index+=2;
            // text_index+=3;
        }
        k=0;
        j=0;
        //cout<<this->sum_seat[i]<<endl;
        i++;
    }
    seat_txt.close();
};

void SeatApi::arrange_seat_hor(){
    bool flag=false;
    for(int i=0;i<6;i++){
        flag=false;
        for(int j=0;j<5;j++)
            if(this->sum_seat[j]<this->sum_seat[j+1]){
                swap(this->sum_seat[j],this->sum_seat[j+1]);
                swap(this->hor[j],this->hor[j+1]);
                swap(this->seat[j],this->seat[j+1]);
                flag=true;
                }
        if(!flag) break;
    }
    for(int k=0;k<6;k++) cout<<this->sum_seat[k]<<" "<<this->hor[k]<<endl;
    for(int i=0;i<6;i++) for(int j=0;j<6;j++) for(int k=0;k<6;k++) cout<<this->seat[i][j][k]<<" "<<i<<" "<<j<<" "<<k<<endl;
};

void SeatApi::book_seat(int i, int j,int k){
    this->seat[i][j][k]=1;
    this->sum_seat[i]+=seat[i][j][k];
    arrange_seat_hor();
};

void SeatApi::update(){
    ofstream seat_update("seat.txt");
    for(int i=0;i<6;i++){
        seat_update<<this->hor[i]<<":";
        for(int j=0;j<6;j++){
            for(int k=0;k<6;k++){
                    seat_update<<this->seat[i][j][k]<<',';
                }
                seat_update<<"% ";
            }
            seat_update<<endl;
    }
};

void SeatApi::setzero(){
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            for(int k=0;k<6;k++){
                this->seat[i][j][k]=0;
            }
        }
    }
};
