
#include "StdAfx.h"
#include <iostream>
#include "List.h"

using namespace std;

/************FUNCTION DEFINITIONS************/
List::List(void)
{size = 0;}


List::~List(void)
{
}

bool List::IsEmpty () { return size==0;} //Function to check if list is empty
bool List::IsFull () {return (size == MaxSize); } //Function to check if list is full

void List::Insert (DataType e) //Function to add an item to the list
{
 if (!(IsFull()))
 {    Item[size] = e;
      size++;
 }
}


/* ordinary function - not a member function */
void Swap (DataType& x, DataType& y) //Function to swap items in the list
{                                
  DataType Temp;
  Temp = x;
  x = y;
  y =Temp;
}                                  

void List::Delete (DataType e) //Function to delete items from the list
{ 
 int index = 0;    
if  (!(IsEmpty()))
  {
    while ((index  < size) && (Item[index] != e) )
       index++;
    if (Item[index] == e)
    {  
     Swap (Item[index], Item[size-1]);
     size--;
    }
  }
}


void List::ShowData () //Function to display the list
{
 for (int index = 0; index < size; index++)
    cout << Item[index] << "   ";
    cout << endl;
	
}

