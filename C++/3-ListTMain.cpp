#include <iostream>
using namespace std;

#include "3-ListT.h"

int main()
{
 //Static list 
 ListT lst;

 // Test for IsEmpty after calling the list into existence.
 if (lst.IsEmpty()) // Since we're checking if the list is empty right after it's created, it's true.
   cout << "Empty!\n"; 

 // Test for PutItemH.
 for (int i = 0; i < 5; i++){
   lst.PutItemH(0);
   lst.PutItemH(i);
  }
 lst.PutItemT(8);  
 lst.Print();
 cout << "Length: " << lst.GetLength() << endl;
 cout << "Get itemH: " << lst.GetItemH() << endl;
 cout << "Get itemT: " << lst.GetItemT() << endl;
 cout << "Find item: " << lst.FindItem(0) << endl << endl;

 // Test for DeleteItemH.
 lst.DeleteItemH();
 lst.Print();
 cout << "Length: " << lst.GetLength() << endl;
 cout << "Get itemH: " << lst.GetItemH() << endl;
 cout << "Get itemT: " << lst.GetItemT() << endl;
 cout << "Find item: " << lst.FindItem(0) << endl<< endl;

 // Test for DeleteItem.
 cout << "Items deleted: " << lst.DeleteItem(0) << endl;
 lst.Print();
 cout << "Length: " << lst.GetLength() << endl;
 cout << "Get itemH: " << lst.GetItemH() << endl;
 cout << "Get itemT: " << lst.GetItemT() << endl;
 lst.DeleteItemT();
 lst.Print();
 
 // Test for IsEmpty after PutItemH is invoked.
 if (lst.IsEmpty()) // This one should be false, since we already put items in the list.
   cout << "Empty!\n";

 cout << endl;
 return 0;
}
