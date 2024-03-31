#include <iostream>
#include "date.h"

using std::cout;
using std::endl;


date::date(){
    year = 1991;
    month = 1;
    day = 1 ;
}
date::date(int m, int d, int y){
    year = (year>1991) ? y: 1991;
    month = ( m > 0 && m <= 12 ) ? m : 1;
    day = ( d > 0 && d <= monthDays() ) ? d : 1 ;
}

bool date::isLeapYear() const{
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int date::monthDays() const{
    if(month%2==0 && month !=8) return 31;
    else if(month == 2) return (isLeapYear())? 29:28;
    else return 30;
}

void date::print() const{
    cout<<month<< '-'<<day << '-' <<year<<endl;
}

void date::setDay(int d){
    day = ( d > 0 && d <= monthDays() ) ? d : 1 ;
}

void date::setMonth(int m){
    month = ( m > 0 && m <= 12) ? m : 1;
}

void date::setYear(int y ){
    year = (y>1991) ? y: 1991;
}

int date::getDay(void) const{
    return day;
}

int date::getMonth(void) const{
    return month;
}

int date::getYear(void) const{
    return year;
}

void date::nextDay(){
    // independent function:
    // if(day < monthDays()) day++;
    // else{
    //     if(month<12) month++;
    //     else if(month==12) {
    //         month =1; 
    //         year++;
    //     }
    //     day=1;
    // }
    
    // previous functions-dependent:
    setDay(day+1);
    if(day==1) setMonth(month+1);
    if(month==1) setYear(year+1);
}