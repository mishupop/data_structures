#include "Stiva.h"

Stiva::Stiva()
{
top=-1;
}

Stiva::~Stiva()
{

}

bool Stiva::push(int x)
{
  if(top >= (MAX_STACK_SIZE-1))
  {  
  std::cout<<"stack overflow\n";
  return false;
  }
  else
  {
    a[++top]=x;
    std::cout<<x<<" pushed into the stack\n";
    return true;
  }
}

int Stiva::pop()
{
  if (top<0)
  {
    std::cout<<"stack underflow\n";
    return 0;
  }
  else
  {
    int x=a[top--];
    std::cout<<x<<"poped from the stack\n";
    return x;
  }
}

int Stiva::peek()
{
    if (top < 0) {
        std::cout << "stack is empty\n";
        return -1;
    } else {
        int x = a[top];
        std::cout << "top element in the stack: " << x << std::endl;
        return x;
    }
}

bool Stiva::isEmpty()
{
  return (top<0)? true:false;
}

bool Stiva::contains(int x)
{
    for (auto each : a)
    {
        if (each == x) 
        {
          std::cout<<x<<"-found in the stack\n";
            return true;
        }
    }
    std::cout<<x<<"-not found in the stack\n";
    return false;
}