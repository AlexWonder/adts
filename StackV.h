//Implementing a Stack ADT with a Vector

#ifndef STACK_H
#define STACK_H

#include <vector>
using namespace std;

class Stack
{
private:

      vector<int> data;
  

public:

    // No default constructor needs to be declared 
    // The vector "knows" how to initialize itself


   // No destructor needs to be declared
   // The vector "knows" how to destroy itself

   int size();
   void push(int);
   void pop();
   int top();
   void clear();
};

#endif
