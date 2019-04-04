#include "seat_include.h"
#include "iostream"

using namespace std;
int main(){
    SeatApi seat;
    //seat.book_seat(0,2,1);
    seat.setzero();
    seat.update();
    return 0;
}