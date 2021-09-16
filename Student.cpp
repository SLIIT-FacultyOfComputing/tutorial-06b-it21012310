#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int sId, char Sname[]) {

  studentId = sId;
  strcpy(name,Sname);
  
  
}

// Display StudentId and Name
void Student::display() {
    cout<<studentId<<endl;
    cout<<name<<endl;

}
