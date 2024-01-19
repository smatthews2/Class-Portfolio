#include <iostream>
using namespace std;

#include "3-ListT.h"

ListT::ListT()
{
 length = 0;
 head = NULL;
 tail = NULL;
}

ListT::~ListT()
{
    node* cur = head;
    node* next;
    while(cur != NULL){
        next = cur -> next;
        delete cur;
        cur = next;
    }
    tail = NULL;
    // Test if the destructor works.
    // cout << "Deleted!\n";
}

bool ListT::IsEmpty() const
{
    return !head; // All we have to do is check the head to see if the list is empty; if head is NULL, the list is empty.
}

int ListT::GetLength() const
{
    return length;
}

void ListT::PutItemH(itemType item)
{
 node* tmp = new node;
 tmp->item = item;
 tmp->next = head;
 tmp->prev = NULL;
 
 if(head != NULL)
  tmp->prev = head;
  
 if (length == 0)
  tail = tmp; 

 head = tmp; 
 length++;
 tmp = NULL;
}

itemType ListT::GetItemH() const
{
    return head -> item;
}

void ListT::DeleteItemH()
{
    node* cur = head;
    head = head -> next;
    delete cur;
    length--;
}

void ListT::PutItemT(const itemType itemIn)
{
    node* tmp = new node;
    node* last = head;
    tmp -> item = itemIn;
    
    if(head == NULL){
        tmp -> prev = NULL;
        head = tmp;
        return;
    }

    while(last -> next != NULL)
     last = last -> next;
    last -> next = tmp;
    
    tmp -> prev = last;
    tail = tmp;
    tmp = NULL;
    length++;

    return;
}

itemType ListT::GetItemT() const
{
    return tail -> item;
}

// THIS DOESN'T WORK; IT COMPLAINS ABOUT A SEGMENTATION FAULT AND "DOUBLE FREE" NONSENSE 
// IF I TRY TO DELETE CUR, SO I'LL JUST DO IT OVER AGAIN!
void ListT::DeleteItemT(){
    node* last = PtrTo();
    node* cur = last -> next;
    node* nextNode = cur -> next;
    last -> next = nextNode;
    delete nextNode;
    length--;
    cur = NULL; 
    nextNode = NULL;
    last = NULL;
    tail = head;
}

// NOR DOES THIS, SINCE I DON'T KNOW WHAT IT'S ASKING FOR!
node* ListT::PtrTo(){
    if(length > 1){
        return tail -> prev;
    }
    else{
        return tail;   
    }
    
}

void ListT::Print() const
{
 node* cur = head;
 while(cur != NULL)
 {
  cout << cur->item << "<->";
  cur = cur->next;
 }
 cout << endl;
}

int ListT::FindItem(const itemType target) const
{
    node* cur = head;
    node* next;
    int nodeNum = 0;

    while(cur != NULL){
        next = cur -> next;
        if(cur -> item == target){
            nodeNum++;
        }
        cur = next;
    }
    
    return nodeNum;
}

int ListT::DeleteItem(const itemType target)
{
    node* cur = head;
    int nodeNum = 0;
    while(head -> item == target){
        DeleteItemH();
        cur = head;
        nodeNum++;
    }
    while(cur -> next != NULL){
        if(cur -> next -> item == target){
            cur -> next = cur -> next -> next;
            length--;
            nodeNum++;
        }
        else{
            cur = cur -> next;
        }
    }

    if(cur -> next == NULL){
        tail = cur;
    }

    return nodeNum;   
}

