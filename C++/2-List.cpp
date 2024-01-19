#include <iostream>
using namespace std;

#include "2-List.h"


//Class-related functions
//Constructor
List::List()
{       
 length = 0;
 head = NULL;
}

//Destructor
List::~List()
{
    node* cur = head;
    node* next;

    while(cur != NULL){
        next = cur -> next;
        delete cur;
        cur = next;
    }
}

//Head-related functions
void List::PutItemH(itemType itemIn)
{
    node* temp = new node;
    temp -> item = itemIn;
    temp -> next = head;
    head = temp;
    temp = NULL;
    length++;
}

itemType List::GetItemH() const
{
    node* cur = head;
    return head -> item;
}

void List::DeleteItemH()
{
    node* cur = head;
    head = head -> next;
    delete cur;
    length--;
}


//General operations on the class

void List::Print() const
{
    node* cur = head;
    node* next;
    itemType item;

    while(cur != NULL){
        next = cur -> next;
        cout << cur -> item << "->";
        cur = next;
    }
    cout << endl;
}

bool List::IsEmpty() const
{
    return !head; // All we have to do is check the head to see if the list is empty; if head is NULL, the list is empty.
}

int List::Find(const itemType target) const
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

int List::DeleteItem(const itemType target)
{
    node* cur = head;
    int nodeNum = 0;
    while(head -> item == target){
        head = head -> next;
        nodeNum++;
    }
    while(cur -> next != NULL){
        if(cur -> next -> item == target){
            cur -> next = cur -> next -> next;
            nodeNum++;
        }
        else{
            cur = cur -> next;
        }
    }
    return nodeNum;   
}

int List::GetLength() const
{
    return length;
}


