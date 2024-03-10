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
class Male:  public Human{

    public:
    string color;

    void sleep(){
        cout << "He was sleeped" << endl;
    }
};

int main(){

    Male object;

    cout << object.age << endl;
    cout << object.height << endl;
    cout << object.weight << endl;

    cout << object.color << endl;
    object.sleep();

    return 0;
}