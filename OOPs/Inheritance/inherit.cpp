#include <iostream>
using namespace std;

class Human
{
public:
    int age;
    int height;
    int weight;

public:
    int getAger()
    {
        return this->age;
    }
    void setweight(int w)
    {
        this->weight = w;
    }
};
class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "he was sleeped" << endl;
    }
};

// class Female : public Human
// {
//     string cutee;

//     void sleep()
//     {
//         cout << "she was sleeped" << endl;
//     }
// };

int mian()
{
    Male obj1;

    obj1.sleep();
    cout << obj1.age << endl;
    cout << obj1.height << endl;
    cout << obj1.weight << endl;

    return 0;
};