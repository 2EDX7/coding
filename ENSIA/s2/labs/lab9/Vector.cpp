#include "Vector.h"

//Constructor
Vector::Vector(int* num_of_vectors = NULL, std::vector<double> init_vector) : numOfVectors(num_of_vectors > 0 ? num_of_vectors : 0), vector(init_vector) {}

//Getters
std::vector<double> Vector::getVector() const{
    return vector;
}

int* Vector::getNumOfVects() const{
    return numOfVectors;
}

double Vector::getElement(int pos) const{
    return vector.at(pos);
}

//Setters
void Vector::setVect(std::vector<double> new_vect){
    vector = new_vect;
}
void Vector::setElement(int pos, double value){
    vector.at(pos) = value;
}


Vector Vector::sumVect(const Vector& B) const{
    int* R_num_of_vects=NULL;   
    std::vector<double> R_vectors;

    if(*numOfVectors == *(B.getNumOfVects())){
        //getting the exact size of the new result vector
        R_num_of_vects = numOfVectors +*(B.getNumOfVects());

        
        //constructing the vector by adding elements from both vectors
        for (size_t i = 0; i < *numOfVectors; i++) {
            R_vectors.push_back(vector.at(i)+B.getElement(i)); 
        }
    }
    

    Vector R(R_num_of_vects, R_vectors);
    return R;
}
Vector Vector::prodVect(const Vector& B) const{
    int* R_num_of_vects = NULL;
    std::vector<double> R_vectors;

    if (*numOfVectors == *(B.getNumOfVects())) {
        // getting the exact size of the new result vector
        R_num_of_vects = numOfVectors + *(B.getNumOfVects());

        // constructing the vector by multiplying elements from both vectors
        for (size_t i = 0; i < *numOfVectors; i++) {
            R_vectors.push_back(vector.at(i) * B.getElement(i));
        }
    }

    Vector R(R_num_of_vects, R_vectors);
    return R;
}

Vector Vector::minsVect(const Vector& B) const {
    int *R_num_of_vects = NULL;
    std::vector<double> R_vectors;

    if (*numOfVectors == *(B.getNumOfVects())) {
        // getting the exact size of the new result vector
        R_num_of_vects = numOfVectors + *(B.getNumOfVects());

        // constructing the vector by subtracting elements from both vectors
        for (size_t i = 0; i < *numOfVectors; i++) {
            R_vectors.push_back(vector.at(i) - B.getElement(i));
        }
    }

    Vector R(R_num_of_vects, R_vectors);
    return R;
}


//Destructor
Vector::~Vector(){
    delete numOfVectors;
}
