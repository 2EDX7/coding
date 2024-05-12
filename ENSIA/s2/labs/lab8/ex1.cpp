#include <iostream>
#include <string>
using namespace std;

class Product{
    public: 
        Product(const string& nm="", long code = 0){
            name = nm ;
            barcode = code;
        }

        void setName(const string& nm){
            name = nm;
        }
        void setCode(long code){
            barcode = code;
        }
        string getName() const{
            return name;
        }
        long getCode() const{
            return barcode;
        } 

        void scanner(){
            cout<<"enter the name of the product: ";
            cin>>name;

            cout<<"enter the barcode of the product: ";
            cin>>barcode;
        }
        void printer(){
            cout<<"product name: " << name;
            cout<<"barcode: " << barcode;
        }


    private:   
        long barcode;
        string name;
};

class PrepackedFood : public Product{

    public: 
        PrepackedFood(double uprice) : unitPrice(uprice){}
        void scanner(){
            cout<<"enter the price of the unit: ";
            cin>>unitPrice;
        }
        void printer(){
            Product;
        }
    private:
        double unitPrice;
};

class FreshFood : public Product{
    public: 
        FreshFood(double w, double pricepkg) : weight(w), pricePerKg(pricepkg) {};



    private:
        double weight;
        double pricePerKg;
};