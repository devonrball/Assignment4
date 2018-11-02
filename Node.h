#include <iostream>
using namespace std;

template <typename T>
class Node
{
public:
  Node(T student);
  ~Node();

  Node* prev;
  Node* next;
  T data;
};

template <typename T>
Node<T>::Node(T stuff)
{
  this->data = stuff;
  this->prev = NULL;
  this->next = NULL;
}

template <typename T>
Node<T>::~Node()
{
  this->prev = NULL;
  this->next = NULL;
}
