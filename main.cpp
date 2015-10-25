#include <iostream>

using namespace std;

class Student {

private:
    string name;
//    int numClasses;
//    string[] classList[numClasses];
// moo test2


public:
    void setName(string x){
    name = x;}

    string getName(){
    return name;}


};

int main()
{
    Student bloop;
    bloop.setName("Katelyn");
    cout << bloop.getName();





    return 0;
}
