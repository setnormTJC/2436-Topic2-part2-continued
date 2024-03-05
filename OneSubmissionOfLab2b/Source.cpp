#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    string make;
    string model;
    int year;
    Car(string m = "", string mo = "", int y = 0) : make(m), model(mo), year(y) {}
};

template <typename T, size_t Size>
class MyArray {
    T elements[Size];
public:
    T& operator[](size_t index) { return elements[index]; }
    size_t size() const { return Size; }
    void fill(const T& value) { for (size_t i = 0; i < Size; ++i) elements[i] = value; }
    T& front() { return elements[0]; }
};

template <typename T>
class VectorPrime {
    T* elements;
    size_t capacity;
    size_t currentSize;
public:
    VectorPrime() 
        : 
        elements(new T[1]), capacity(1), currentSize(0) {}
   
    void push_back(const T& value) {
        if (currentSize == capacity) {
            capacity *= 2;
            T* newElements = new T[capacity];
            for (size_t i = 0; i < currentSize; ++i) {
                newElements[i] = elements[i];
            }

            delete[] elements;

            elements = newElements;
        }

        elements[currentSize++] = value;
    }

    size_t size() const { return currentSize; }

    T& operator[](size_t index) { return elements[index]; }
   
    void resize(size_t newSize) {
        if (newSize > capacity) {
            T* newElements = new T[newSize];
            for (size_t i = 0; i < currentSize; ++i) {
                newElements[i] = elements[i];
            }
            delete[] elements;
            elements = newElements;
            capacity = newSize;
        }
    }
    
    T& back() { return elements[currentSize - 1]; }
};

int main() {

    MyArray<MyArray<Car, 3>, 2> carLot;
    
    
    
    carLot[0][0] = Car("Toyota", "Corolla", 2020);
    carLot[0][1] = Car("Honda", "Civic", 2019);
   // carLot[0].fill(Car("Ford", "Fiesta", 2018));
    //cout << "Car make: " << carLot[0].front().make << endl;

    carLot[1].fill(Car("Wolksvagen", "some VW model"));

    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 2; column++)
        {
            cout << carLot[row][column].make << "\t"
                << carLot[row][column].model << "\t"
                << carLot[row][column].year << endl; 
        }
    }


    VectorPrime<Car> carInventory;
    carInventory.push_back(Car("Toyota", "Corolla", 2020));
    carInventory.push_back(Car("Honda", "Civic", 2019));
    carInventory.push_back(Car("Ford", "Fiesta", 2018));
    cout << "Car make: " << carInventory.back().make << endl;

    return 0;
}
