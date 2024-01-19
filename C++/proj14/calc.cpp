#include <iostream>
using namespace std;

#include "calc.h"
#include <cstring>


//Write functions in this order.  Constructor and destructor will be built as the
//functions it invokes are written

Calc::Calc(char* argvIn)
{
  int length = strlen(argvIn);
  inFix = new char[length + 1], postFix = new char[length + 1];
  strcpy(inFix, argvIn);

  stk = new Stack;    
  Parse();
  InFixToPostFix();  

  if(!CheckParens() || !CheckTokens())
  {
    cout << "Missing parentheses or tokens invalid.\n";
    exit(EXIT_FAILURE);
  }
}

Calc::~Calc()
{
 delete inFix;
 delete valueTbl;
 delete stk;
}

bool Calc::CheckTokens()
{
 /*
 Here is some sample code to show how cstring functions might be used
 char x = '(';
 cout << x << endl;
 if (!isdigit(x))
  cout << x << endl;
 char y = x + 25;
 cout << y << endl;
 if (isupper(y))
  cout << y << endl;
 */
 int cur = 0;
 while(inFix[cur] != '\0'){
    if(!isalpha(inFix[cur]) && !isdigit(inFix[cur]) && inFix[cur] != '(' && inFix[cur] != ')' && inFix[cur] != '+' && inFix[cur] != '-' && inFix[cur] != '*' && inFix[cur] != '/'){
      return false;
    }
    cur++;
 }
 return true; 
}

void Calc::MakeValueTbl()
{
 valueTbl = new int[26];
 for(int i = 0; i < 26; i++){
  valueTbl[i] = 0;
//   cout << valueTbl[i] << ' ';
 }
//  cout << endl;
 valueIdx = 0;
}

void Calc::Parse()
{
 MakeValueTbl();
 int length = strlen(inFix);
 char* temp = new char[length + 1];
 int i = 0, j = 0;

 while(inFix[i] != '\0'){
  if(inFix[i] == '(' || inFix[i] == ')' || inFix[i] == '+' || inFix[i] == '-' || inFix[i] == '*' || inFix[i] == '/' || (inFix[i] >= 'A' && inFix[i] <= 'Z')){
   temp[j] = inFix[i];
  }
  else{
   int last = FindLast(i);
   int valLength = last - i + 2;
   char* val = new char[valLength];
   val[valLength - 1] = '\0';

   int k = 0;
   while(k < valLength - 1){
     val[k] = inFix[i + k];
     k++;
   }

   valueTbl[valueIdx] = atoi(val);
   temp[j] = (char)('A' + valueIdx);
   valueIdx++;
   i = last;
   delete val;
  }
  i++;
  j++;
 }
 temp[j] = '\0';
 int tempLength = j + 1;
 delete inFix;
 inFix = new char[tempLength];
 int count = 0;
 while(temp[count] != '\0'){
   inFix[count] = temp[count];
   count++;
 }
 inFix[count] = '\0';
 delete temp;
}

int Calc::FindLast(int cur){
  int i = cur;
  while(inFix[i] >= '0' && inFix[i] <= '9'){
    i++;
  }
  return i - 1;
}


bool Calc::CheckParens()
{
  int cur = 0;
 
 if(inFix[cur] != '(')
   return false;
 
 while(inFix[cur] != '\0'){
   if(inFix[cur] == '(')
    stk->Push(inFix[cur]);
   else if(inFix[cur] == ')')
    stk->Pop();
   
   cur++;
 }
 
 return stk->IsEmpty();
}

void Calc::DisplayInFix()
{
 int cur = 0;
 while(inFix[cur] != '\0')
 {
  cout << inFix[cur];
  cur++;    
 }
 cout << endl;
}

void Calc::InFixToPostFix()
{
 int cur = 0;
 
 while(inFix[cur] != '\0')
 {
  if(isdigit(inFix[cur]) || (inFix[cur] >= 'A' && inFix[cur] <= 'Z'))
   postFix += inFix[cur];
  
  if(inFix[cur] == '(' || inFix[cur] == '+' || inFix[cur] == '-' || inFix[cur] == '*' || inFix[cur] == '/')
   stk->Push(inFix[cur]);
  
  if(inFix[cur] == ')')
  {
   while(stk->Peek() != ')')
   {
    postFix += stk->Peek();
    stk->Pop();
   }
   stk->Pop();
  }
  
  cur++;
 }
}

void Calc::DisplayPostFix()
{
 int cur = 0;
 while(postFix[cur] != '\0')
 {
  cout << postFix[cur];
  cur++;
 }
 cout << endl;
}

int Calc::Evaluate()
{
 return 0;
}
