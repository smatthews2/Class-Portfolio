/* Author: Sebastian Matthews
    CPSC 122 01 Project 9: Writing a Linked List Class
    March 25, 2022
    Gonzaga University
    This program demonstrates the implementation of a linked list class, with all the functions filled out and tested in the main file.
    The drawback of arrays is that the number of items to be stored must be known in advance of execution.  
    Hence, a linked list uses dynamically allocated memory to overcome that drawback. 
*/

#ifndef LIST_H
#define LIST_H

typedef int itemType;

struct node
{
 itemType item;
 node* next;
};

class List
{
 public:
   /*
   pre: None. This is the constructor function, invoked like this from the 
        the client program: 
        List lst;
	or
	List* lst1 = new List;
   post: an instance of List exists
   */ 
   List();

   /*
   pre: An instance of List exists.  This is the destructor function, automatically
        invoked in the case of a static declaration, explcitly invoked, using the delete
        key word, in the case of a dynamic declaration.	
   post: All dynamically declared memory, i.e., the memory for all nodes, has been
        returned to the heap.   
   */ 
   ~List();

   /*
   pre: an instance of List exists
   post: returns true if list is empty, false otherwise
   */ 
   bool IsEmpty() const;

   /*
   pre: an instance of List exists
   post: returns length of the list 
   */
   int GetLength() const;

   /*
   pre: an instance of List exists
   post: node containing itemIn is at the head of the list 
   */
   void PutItemH(const itemType itemIn);

   /*
   pre: an instance of List exists and is not empty
   post: Returns the contents pointed to by the head of the list 
   */
   itemType GetItemH() const;

   /*
   pre: an instance of list exists and is not empty
   post: Node pointed to by head is deleted 
   */
   void DeleteItemH();

   /*
   pre: an instance of list exists and is not empty
   post: contents of list nodes are displayed on subsequent lines, head to tail. 
   */
   void Print() const;
  
   /*
   pre: an instance of List exists and is not empty
   post: returns the number of nodes in the list that stores target 
   */
   int Find(const itemType target) const;

   /*
   pre:  an instance of List exists and is not empty 
   post: deletes all nodes that store target.  Returns
         the number of nodes deleted 
   */
   int DeleteItem(const itemType target);

 private:
   int length;   //length of the list
   node* head;   //points to the first node on the list 
};
#endif

