#include <iostream>
#include "Node.h"
#include "Student.h"
#include <cstring>

using namespace std;

int main() {
  char* name = new char[50];

  strncpy(name, "Armaan", 49);
  Student* armaan = new Student(name);
  Node* node1 = new Node(armaan);

  strncpy(name, "Jeff", 49);
  Student* jeff = new Student(name);
  Node* node2 = new Node(jeff);

  strncpy(name, "Galbraith", 49);
  Student* galbraith = new Student(name);
  Node* node3 = new Node(galbraith);

  node1->setNext(node2);
  node2->setNext(node3);
  node3->setNext(NULL);

  cout << node1->getStudent()->name << endl;
  cout << node1->getNext()->getStudent()->name << endl;
  cout << node2->getNext()->getStudent()->name << endl;
}
