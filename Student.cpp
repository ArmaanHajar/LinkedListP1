#include <iostream>
#include "Student.h"
#include <cstring>

using namespace std;

Student::Student(char* nametemp) {
  name = new name[50];
  strncpy(name, nametemp, 49);
}

char* Student::getName() {
  return name;
}

Student::~Student() {
  delete name;
}
