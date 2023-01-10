#include <iostream>
#include "Node.h"
#include "Student.h"

using namespace std;

Node::Node(Student* studenttemp) {
  nextStudent = studenttemp;
}

Node* Node::getNext() {
  return nextPointer;
}

Student* Node::getStudent() {
  return nextStudent;
}

void Node::setNext(Node* nexttemp) {
  nextPointer = nexttemp;
}

Node::~Node() {
  cout << "Destructing Node" << endl;
}
