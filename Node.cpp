#include <iostream>
#include "Node.h"
#include "Student.h"

using namespace std;

Node::Node(Student* studenttemp) {
  student = studenttemp;
}

Node Node*::getNext() {
  return nextPointer;
}

Student* Node::getStudent() {
  return nextStudent;
}

void Node::setNext(Node* nexttemp) {
  next = nexttemp;
}

Node::~Node() {
  cout << "Destructing Node" << endl;
}
