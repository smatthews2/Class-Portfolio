#include <iostream>
using namespace std;

#include "4-ListD.h"
#include "4-ListD.cpp"

//All tests are separated by function
void TestInsert();
void TestFunctions();
void TestCopyConstructor();

int main()
{
 TestInsert();
 TestFunctions();
//  TestCopyConstructor();
}

void TestInsert()
{

 ListD<int>* lst = new ListD<int>;
 for (int i = 1; i <= 5; i++)
  lst->Insert(i,i);

 //test general case insert
 cout << "Passed Insert Test 1 if 1 through 5 appear on subsequent lines" << endl;
 lst->PrintForward();
 cout << endl;

 //test insert at the head
 lst->Insert(0,1);
 cout << "Passed Insert Test 2 if 0 appears in position 1" << endl; 
 lst->PrintForward();
 cout << endl;

 //test insert at the tail 
 lst->Insert(100,7);
 cout << "Passed Insert Test 3 if 100 appears in final position" << endl; 
 lst->PrintForward();
 cout << endl;
 
 //test insert in middle 
 lst->Insert(50,5);
 cout << "Passed Insert Test 4 if 50 appears in middle position" << endl; 
 lst->PrintForward();
 cout << endl;
}

void TestFunctions(){
 //test print backward
 ListD<int>* lst = new ListD<int>;
 for (int i = 1; i <= 5; i++){
  lst->Insert(i,i);  
 }
  

 cout << "Test for PrintBackward():\n";
 lst->PrintBackward();
 cout << endl; 
 
 cout << "Test for Delete(); we're deleting the node at the third position:\n";
 lst->Delete(3);
 lst->PrintForward();
 cout << endl;
 
//  cout << "Test for DeleteAll():\n"
//  lst->DeleteAll(2);
//  lst->PrintForward();

 cout << "Test for Sort():\n";
 lst->Sort();
 lst->PrintForward();
 cout << endl;
 
}

void TestCopyConstructor()
{
 ListD<int>* lst1 = new ListD<int>;
 for (int i = 1; i <= 3; i++)
  lst1->Insert(i,i);

 ListD<int>* lst2(lst1);
 
 cout << "Traverse lst1" << endl;
 lst1->PrintForward();
 cout << endl;
 cout << "Traverse lst2" << endl;
 lst2->PrintForward();

 delete lst1;
 delete lst2;
}
