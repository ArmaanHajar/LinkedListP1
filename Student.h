#pragma once
#include <iostream>

using namespace std;

class Student {
 public:
  Student(char*); // student constructor
  char* getName(); // get student name
  ~Student(); // student destructor
  
  char* name = new char[50];
};
