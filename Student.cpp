#include <iostream>
#include "Student.h"
#include <cstring>

using namespace std;

Student::Student(char* nametemp) {
  strncpy(name, nametemp, 49);
}

char* Student::getName() {
  return name;
}

Student::~Student() {
  delete name;
}
