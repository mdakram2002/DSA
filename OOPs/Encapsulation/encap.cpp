#include <iostream>
using namespace std;
class encap
{
private:
    string name;
    int age;
    int height;

public:
    int getAge()
    {
        return this->age;
    }
    // void print()
    // {
    //     age = 22;
    // }
};

int main()
{
    encap first;

    cout << "this is encapsulation" << endl;

    return 0;
}
