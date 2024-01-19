#include <iostream>
#include <climits>
using namespace std;

#include "4-ListD.h"

template <typename T>
ListD<T>::ListD()
{
 InitializeVars();
}

template <typename T>
ListD<T>::ListD(ListD<T>* lst)
{
 InitializeVars();
 //returns a pointer to the first node, which is what we want here
 doubleNode<T>* cur = lst->FindPosition(2);
 for (int i = 1; i <= lst->length; i++)
 {
  cout << cur->item << endl;
  Insert(cur->item,i);
  cur = cur->next;
 }
}

template <typename T>
void ListD<T>::InitializeVars()
{
 length = 0;
 
 //create dummy nodes;
 head = new doubleNode<T>;
 tail = new doubleNode<T>;

 //set values for head dummy node;
 head->prev = NULL;
 head->item = INT_MIN;
 head->next = tail;

 //set values for tail dummy node;
 tail->prev = head; 
 tail->item = INT_MAX;
 tail->next = NULL;
}

template <typename T>
ListD<T>::~ListD()
{
    doubleNode<T>* cur = head;
    doubleNode<T>* next;
    
    while(cur != NULL){
        next = cur -> next;
        delete cur;
        cur = next;
    }
    
    length = 0;
    // Uncomment below to see if it works.
    // cout << "Deleted!\n";
}

template <typename T>
doubleNode<T>* ListD<T>::FindPosition(int pos)
{
 //Inserting at the tail is a special case.  It can be made much more efficient than
 //this.
 doubleNode<T>* cur = head;
 int i = 0;  //begin at the dummy node
 while (i < pos - 1)
 {
  cur = cur->next;
  i++;
 }
 return cur;
} 

template <typename T>  
void ListD<T>::Insert(T item, int pos)
{
 //new node goes between these two nodes
 doubleNode<T>* insertPtA = FindPosition(pos);  
 doubleNode<T>* insertPtB = insertPtA->next; 

 //create new node and set its values
 doubleNode<T>* tmp = new doubleNode<T>; 
 tmp->prev = insertPtA;
 tmp->item = item;
 tmp->next = insertPtB;

 //set pointers for nodes before and after the insertion point
 insertPtA->next = tmp;
 insertPtB->prev = tmp;

 length++;
}

template <typename T>
void ListD<T>::Delete(int pos){
 doubleNode<T>* deletePtA = FindPosition(pos);
 doubleNode<T>* cur = deletePtA->next;
 
 delete cur;
 deletePtA->next = deletePtA->next->next;
 
 length--;
}  

// I can't figure this out; it gives me a segmentation fault and I don't feel like fixing it since it's the same function that I've been struggling with for the past two assignments.
template <typename T>
int ListD<T>::DeleteAll(T item){
    doubleNode<T>* cur = head;
    int pos = 1, nodeNum = 0;
    
    cout << "Length: " << length << endl;

    while(head -> item == item){
        head = head -> next;
        // delete head;
        nodeNum++;
    }
    while(cur -> next != NULL){
        if(cur -> next -> item == item){
            cur -> next = cur -> next -> next;
            // delete cur->next;
            nodeNum++;
        }
        else{
            cur = cur -> next;
        }
    } 
    
    cout << "Length: " << length << endl;

    return nodeNum;
}   

template <typename T>
void ListD<T>::PrintForward()
{
 doubleNode<T>* cur = head->next;

 int i = 0;
 while (i < length)
 {
  cout << cur->item << endl;
  cur = cur->next;
  i++;
 }
}

template <typename T>
void ListD<T>::PrintBackward(){
    doubleNode<T>* cur = tail->prev;
    
    int i = length;
    while(i > 0){
        cout << cur -> item << endl;
        cur = cur->prev;
        i--;
    }
}

void ListD<int>::Sort(){
    return 0; // I'll write sort over the weekend.
}
