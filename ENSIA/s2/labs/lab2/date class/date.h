#ifndef lab2_date_h
#define lab2_date_h

class date{
    public:
        date();
        date(int, int, int);
        void print() const;
        void nextDay();
        int monthDays() const;
        bool isLeapYear() const;
        void setDay(int);
        void setMonth(int);
        void setYear(int);
        int getDay(void) const;
        int getMonth(void) const;
        int getYear(void) const;

    private:
        int month;
        int day;
        int year;
};


#endif