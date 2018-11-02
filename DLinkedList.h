#include <string>
#include "Node.h"

using namespace std;

template <typename T>
class DLinkedList
{
  private:
    Node<T> *front;
    Node<T> *back;
    unsigned int size;

  public:
    DLinkedList();
    //DlinkedList(Node<T> *someNode);
    DLinkedList(T data);
    ~DLinkedList();

    void insertFront(T data);
    void insertBack(T data);
    Node<T>* removeFront();
    Node<T>* removeBack();

    Node<T>* peekFront();
    Node<T>* peekBack();
    bool isEmpty();
    int getSize();


    //void printList();
    //Node<T>* find(int val);
    //unsigned int getSize();
    //int deletePosition(int pos);

    //Node<T>* remove(int key); //returns entire node
    //read book as to why this would occur

    void clear();
};

template <typename T>
DLinkedList<T>::DLinkedList()
{
  /*this->size = 0;
  this->front = NULL;
  this->back = NULL;*/
  front = NULL;
  back = NULL;
  size = 0;
}

/*template <typename T>
DLinkedList<T>::DLinkedList(Node<T>* someNode)
{
  this->size = 1;
  this->front = someNode;
  this->back = someNode;
  //this->next = back; // these might be weird
  //this->prev = front; //
}*/

template <typename T>
DLinkedList<T>::DLinkedList(T data) // probably okay
{
  Node<T> *newNode = new Node<T>(data);
  size = 1;
  front = newNode;
  back = newNode;
}

template <typename T>
DLinkedList<T>::~DLinkedList() //DOesn't something need to be virtual?
{
  /*while(!Empty()){
    T* temp;
    temp = front;
    front = front->next;
    delete temp;
  }
  back = NULL;
  size = 0;*/ //doesn't depend on clear()
  clear();
  //front = NULL;
  back = NULL;

}

template <typename T>
void DLinkedList<T>::insertFront(T data) //probably okay
{
  Node<T> *newNode = new Node<T>(data);

  if(isEmpty()) // front==NULL || size==0
  {
    back = newNode;
  }
  else{
    front->prev = newNode;
    newNode->next = front;
  }
  front = newNode;
  ++size;
  return;
}

template <typename T>
void DLinkedList<T>::insertBack(T data)
{
  Node<T> newNode = new Node<T>(data);

  if(isEmpty()) // front==NULL || size==0
  {
    front = newNode;
  }
  else{
    back->next = newNode;
    newNode->prev = back;
  }
  back = newNode;
  ++size;
  return;
}

template <typename T>
Node<T>* DLinkedList<T>::removeFront() // no clude if this is okay
{
  //check if empty
  if(isEmpty())
  {
    cout << "Can't remove elements from an empty list!\n";
    exit(EXIT_FAILURE);
    //if made bool, could return false
  }

  Node<T> *temp = this->front;

  if(front->next == NULL){
    this->back = NULL;
  }
  else{
    front->next->prev = NULL;
  }

  this->front = this->front->next; //might need to switch sides of =
  temp->next = NULL;
  --size;

  return temp;
}

template <typename T>
Node<T>* DLinkedList<T>::removeBack()
{
  if(isEmpty())
  {
    cout << "Can't remove elements from an empty list!\n";
    exit(EXIT_FAILURE);
  }

  T* temp = this->back;

  if(back->prev == NULL){
    this->front == NULL;
  }
  else{
    back->prev->next = NULL;
  }
  this->back = this->back->prev;
  temp->prev = NULL;
  --size;

  return temp;
}

template <typename T>
Node<T>* DLinkedList<T>::peekFront()
{
  return this->front;
}

template <typename T>
Node<T>* DLinkedList<T>::peekBack()
{
  return this->back;
}

template <typename T>
bool DLinkedList<T>::isEmpty()
{
  return (size == 0);
}

/*template <typename T>
void DLinkedList<T>::printList()
{}

template <typename T>
T* DLinkedList<T>::find(int val)
{}

template <typename T>
unsigned in DLinkedList<T>::getSize()
{}

template <typename T>
int DLinkedList<T>::deletePosition(int pos)
{}*/

//template <typename T>
//T* DLinkedList<T>::(int key){}
template <typename T>
int DLinkedList<T>::getSize()
{
  return this->size;
}

template <typename T>
void DLinkedList<T>::clear()
{
  while(!isEmpty()){
    Node<T> *temp = new Node<T>();
    temp = front;
    front = front->next;
    delete temp;
    --size;
  }
  back = NULL;
  size = 0;
}
