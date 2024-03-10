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
class Male:  private Human{

    public:
    string color;

    void sleep(){
        cout << "He was sleeped" << endl;
    }
    int getHeight(){
        return this-> height;
    }
    int getAge(){
        return this-> age;
    }
    int getWeight(){
        return this-> weight;
    }
};

int main(){

    Male object;

    cout << object.getHeight() << endl;
    cout << object.getAge() << endl;
    cout << object.getWeight() << endl;

    // cout << object.age << endl; //not accessible
    // cout << object.height << endl;
    // cout << object.weight << endl;

    // cout << object.color << endl;
    // object.sleep();

    return 0;
}