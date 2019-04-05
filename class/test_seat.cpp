#include "seat_include.h"
#include "iostream"

using namespace std;
int main(){
    SeatApi seat;
    seat.book_seat(0,0,0,12,15);
    //seat.setzero();
    seat.update();
    return 0;
}