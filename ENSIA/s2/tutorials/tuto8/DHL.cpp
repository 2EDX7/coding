#include <iostream>
#include <string>
using namespace std;

class Package
{
    private:
        string senderName, senderAddress;
        string recipientName, recipientAddress;
        int weight;
        int costPerKg;

    public:
        Package(string sName, string sAddress, string rName, string rAddress, int w, int cpkg)
        {
            senderName = sName; senderAddress=sAddress;
            recipientName = rName; recipientAddress = rName;
            weight = w > 0 ? w : 0;
            costPerKg = cpkg > 0 ? cpkg : 0;
        }
        double calculateCost() const{
            return costPerKg*weight;
        }
        void setWeight(const int& w){
            weight = w > 0 ? w : weight;
        }
        void setCostPerKg(const int& cpkg){
            costPerKg = cpkg > 0 ? cpkg : costPerKg;
        }
};
