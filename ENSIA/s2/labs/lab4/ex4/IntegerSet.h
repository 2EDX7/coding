#pragma once
#include <vector>

class IntegerSet{
    private:
        bool set[101]={0}; 
        
    public:
        IntegerSet(); 
        IntegerSet(std::vector<int> );
        IntegerSet unionOfSets(const IntegerSet& ) const;
        IntegerSet intersectionOfSets(const IntegerSet& )const ;
        void insertElement(int );
        void deleteElement(int );
        void inputSet(std::vector<int>);
        void printSet()const;
        bool isEqualTo(const IntegerSet& );
};

