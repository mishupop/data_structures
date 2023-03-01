#ifndef STIVA_H
#define STIVA_H

#pragma once
#include <iostream>
#define MAX_STACK_SIZE 10
class Stiva
{
public:
int a[MAX_STACK_SIZE];
    Stiva();
    ~Stiva();
bool push(int x);
int pop();
int peek();//tema - val varfului stivei fara sa o stearga
bool isEmpty();//daca e gol sau nu
bool contains(int x);//sa caute prin stiva si sa gaseasca parametrul dat daca exista

private:
int top;//val elem varf stiva

};

#endif