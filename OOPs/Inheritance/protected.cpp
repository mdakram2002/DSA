#include <iostream>
using namespace std;

class Human{

    public:
    int height;
    int age;
    int weight;

    public:
    int getAge(){

        return this->age;
    }
    void setWeight(int w){
        this-> weight = w;
    }
};
class Male:  protected Human{

    public:
    string color;

    void sleep(){
        cout << "He was sleeped" << endl;
    }
    int getWeight(){
        return this-> weight;
    }
    int getHeight(){
        return this-> height;
    }
    int getAge(){
        return this-> age;
    }
    
};

int main(){

    Male object;

    cout << object.getWeight() << endl; //without getter setter we're not access the properties of father or child class with private access modifie,
    cout << object.getHeight() << endl;
    cout << object.getAge() << endl; 
    // cout << object.height << endl;
    // cout << object.weight << endl;

    // cout << object.color << endl;
    // object.sleep();

    return 0;
}