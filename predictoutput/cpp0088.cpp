/**
 * \file   file.cpp
 * \author Rangarajan R 
 * \date   March, 2016
 * \brief  
 *   Predict the output.
 *
 * \details 
 *   Detailed description of file.
 *
 * \note
 *   The notes for this file.
 *
 * \copyright
 *   
 */
#include <iostream>  
using namespace std;
 
class Base1 {
 public:
     ~Base1()  { cout << " Base1's destructor" << endl; }
};
   
class Base2 {
 public:
     ~Base2()  { cout << " Base2's destructor" << endl; }
};
   
class Derived: public Base1, public Base2 {
   public:
     ~Derived()  { cout << " Derived's destructor" << endl; }
};
   
int main()
{
   Derived d;
   return 0;
}
