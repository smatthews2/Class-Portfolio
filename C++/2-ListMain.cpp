#include <iostream>
using namespace std;

#include "2-List.h"

int main()
{
 //Static list 
 List lst;
 
 // Test for IsEmpty after calling the list into existence.
 if (lst.IsEmpty()) // Since we're checking if the list is empty right after it's created, it's true.
   cout << "Empty!\n"; 
 
 // Test for Print and GetLength(Don't comment the for loop out, or else the rest of the tests won't work)
 for (int i = 0; i < 5; i++){
   lst.PutItemH(0);
   lst.PutItemH(i);
  }
 lst.Print();
 cout << endl << lst.GetLength() << endl;
 
 // Test for Find
 cout << endl;
 cout << lst.Find(0);
 cout << endl;

 // Test for DeleteItem
 cout << endl;
 cout << lst.DeleteItem(0) << endl;
 cout << endl;
 lst.Print();

 // Test for GetItemH
 cout << endl;
 cout << lst.GetItemH();
 cout << endl;
 
 // Test for DeleteItemH
 lst.DeleteItemH();
 cout << endl;
 lst.Print();
 
 // Test for GetItemH after deleting an item at the head.
 cout << endl;
 cout << lst.GetItemH();
 cout << endl << endl;
 
 if (lst.IsEmpty()) // This one should be false, since we already put items in the list.
   cout << "Empty!\n";
 
 //Dynamic list 
 List* lst1 = new List;
 
 // Test for IsEmpty after calling the list into existence.
 if (lst1->IsEmpty()) // Since we're checking if the list is empty right after it's created, it's true.
   cout << "Empty!\n";
 
 // Test for Print and GetLength(Don't comment the for loop out, or else the rest of the tests won't work)
 for (int i = 0; i < 5; i++){
   lst1->PutItemH(0);
   lst1->PutItemH(10*i);
 }
   
 lst1->Print();
 cout << endl << lst1->GetLength() << endl;
 
 // Test for Find
 cout << endl;
 cout << lst1->Find(0);
 cout << endl;
 
 // Test for DeleteItem
 cout << endl;
 cout << lst1->DeleteItem(0) << endl;
 cout << endl;
 lst1->Print();

 // Test for GetItemH
 cout << endl;
 cout << lst1->GetItemH();
 cout << endl;
 
 // Test for DeleteItemH
 lst1->DeleteItemH();
 cout << endl;
 lst1->Print();
 
 // Test for GetItemH after deleting an item at the head
 cout << endl;
 cout << lst1->GetItemH();
 cout << endl;
 
 // Test for IsEmpty after list is filled
 if (lst1->IsEmpty()) // This one should be false, since we already put items in the list.
   cout << "Empty!\n";

 delete lst1; //necessary to invoke destructor on dynamic list
 cout << endl;
 return 0;
}
