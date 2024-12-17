#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main (){


    // create
    unordered_map<string, int> mp;
    //<key, value pair> variable


    // Insertion technique
    //1
    pair<string,int> p = make_pair("Akram", 21);

    //2
    pair<string,int> pair2("Love", 21);
    mp.insert(pair2);

    //3
    mp["Akram"] = 1;
    mp[0] = 2;

    cout << mp["Akram"] << endl;


    return 0;
}