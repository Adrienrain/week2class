// ser221  assignment two part one.   Hoe (Adrien) Ma.  asurite: hlma1   10/24/15

#include <iostream>
#include <vector>

using namespace std;

class Student {    //sets up student record

//declare variables
private:
    string name;
    int numClasses;
 //   string[] classList = new string[numClasses];
    vector<string> classList;


//functions, mutators, and accessors.
public:
    // set name variable
    void setName(string x){
    name = x;}

    // getter for name
    string getName(){
    return name;}

    // getter for num of classes
    int getNumClasses(){
    return numClasses;}

    // setter for num of classes
    void setNumClasses(int y){
    numClasses = y;}



    // ask for user input regarding their classes and set variables
    void getInfo(){
        string gname, takeNames;  // declare variables
        int gnumClasses;

        // get input from user
        cout << "Please enter name of student: " << endl;
        cin >> gname;
        setName(gname);

        cout << "Please enter the number of courses that the student is taking: " << endl;
        cin >> gnumClasses;
        setNumClasses(gnumClasses);

        cout << "Please enter the names of the course that the student is taking: " << endl;

        //  for loop to fill vector based on user input
        for(int x=0;x<numClasses;x++){
            cout << "Enter name of course #" << 1+x << " :" << endl;
            cin >> takeNames;
            classList.push_back(takeNames);


        }


    }  // end of getInfo function

    // function to display information previously entered
    void printInfo(){
    cout << name << " is taking the following " << numClasses << " classes:" << endl;
    for(int i = 0; i < numClasses; i++){
        cout << 1+i << ".) " <<  classList[i] << endl;  // neatly formatted output of classes
    }
    }  // end of printInfo function

    // this function wipes out all info when user chooses not to continue
    void wipeInfo(){
    name = "";
    numClasses = 0;
    classList.clear();
    }  //end of wipeInfo function
};

// main function to call the functions and control flow of program
int main()
{
    string again;  // initialize variables
    bool repeat;

    // do loop until boolean interrupts it
    do{
    Student stud;   // create object stud of Student class
    stud.getInfo();      //    call function that takes input from user
    stud.printInfo();     //   call function that prints out information
    cout << "Would you like to enter in more information? (y/n) " << endl;   // ask if user wants to do it again
    cin >> again;
    if(again == "y" || again == "Y"){   // if either y/Y then repeat!
        repeat = true;
    }
    else{     // otherwise, call function to reset everything and don't repeat do/while loop
        stud.wipeInfo();
        repeat = false;
    }


     }  while(repeat == true);

     cout << "No more for you?  Have a good day!" << endl;


    return 0;
}


