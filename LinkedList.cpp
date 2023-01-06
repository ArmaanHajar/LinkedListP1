#include <iostream>
#include "Node.h"
#include "Student.h"
#include <cstring>

using namespace std;

int main() {
  char name[50] = "";

  strncpy(name, "Armaan");
  Student* armaan = new Student(name);
  Node* node1 = new Node(armaan);

  strncpy(name, "Jeff");
  Student* jeff = new Student(name);
  Node* node2 = new Node(jeff);

  strncpy(name, "Galbraith");
  Student* galbraith = new Student(name);
  Node* node3 = new Node(galbraith);

  node1->setNext(node2);
  node2->setNext(node3);
  node3->setNext(NULL);

  cout << node1->getStudent()->name << endl;
  cout << node1->getNext()->name << endl;
  cout << node2->getNext()->name << endl;
}
