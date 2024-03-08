#include <iostream>
using namespace std;

class Human{
public:
    int weight;

private:
    int age;
    int height;

public:
    int getAge(){

        return this->age;
    }
    void setweight(int w){

        this->weight = w;
    }
};
class Male : private Human{

public:
    string color;

    void sleep(){

        cout << "he was sleeped" << endl;
    }
    
    int getHeight(){

        // return this->height;
    }
};

class Female : public Human{

    string cutee;
    void sleep(){

        cout << "she was sleeped" << endl;
    }
};

int mian(){

    Human obj1;

    obj1.getAge();
    cout << obj1.getAge() << endl;
    // cout << obj1.height << endl;
    // cout << obj1.weight << endl;

    return 0;
};