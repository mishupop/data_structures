
#include <algorithm>
#include "Stiva.h"
#include <stack>


class Node
{
    public:
    int data;
    Node* next;
};

void printLinkedList(Node* ref)
{
    while(ref != nullptr)
    {
        std::cout<<"data is: "<<ref->data<<std::endl;
        ref=ref->next;
    }
}

//functie care sa caute intr-o linked list un element
void searchLinkedList(Node* ref, int x)
{
    while(ref != nullptr)
    {
        if(x==ref->data)
        {
        std::cout<<"x is found: "<<ref->data<<std::endl;
        break;
        }
        else
        ref=ref->next;
        
    }
}

bool findElement(int my_array[], int size, int number)
{

for (int i = 0; i<size; i++)
{
    if (my_array[i]== number)
    {
        return true;
    }

}

return false;

}


// functie ce da cel mai mare elem din un array
int find_max_elem(int my_array[],int arr_size)
{
std::sort(my_array,my_array+arr_size);//sau sort(my_array,my_array+arr_size,std::greater<int>());
return my_array[arr_size-1];
//...sau:return my_array[0];-[]=random acces specifier- se acceseaza direct si nu trebuie iterat
}

int find_max(int my_array[],int arr_size)
{
int max = my_array[0];
    for (int i = 1; i<arr_size; i++)
    {
    if (max<my_array[i])
    max=my_array[i];
    }
    return max;
}


int main()
{
Node* cap=nullptr;
Node* doi=nullptr;
Node* trei=nullptr;
Node* patru=nullptr;

//alocam 3 noduri pe mem heap;
cap=new Node();
doi=new Node();
trei=new Node();
patru=new Node();

cap->data=1;
cap->next=doi;

doi->data=2;
doi->next=trei;

trei->data=3;
trei->next=patru;

patru->data=4;
patru->next=nullptr;
printLinkedList(cap);
searchLinkedList(cap,2);



    // int test[]={8,2,1,3,5,4,7,6};

    // if(findElement(test,8,7 ))
    // {
    //     std::cout<<"am gasit 7\n";
    // }
    // else
    // std::cout<<"n-am gasit\n";

    // std::cout<<find_max_elem(test,8)<<"-cu sort"<<std::endl;//-O(n log n) +O(1)-worst case
    // std::cout<<find_max(test,8)<<"-fara sort"<<std::endl;// - O(n)
    // la n=8, nlog(n)=7.2247, la n=100 nlog(n)=200 - la arrayuri mici O() cu sort poate fi 
    // foarte aproape de varianta cu loop.
//     Stiva s;

// for(int i=0;i<7;i++)
//  {
//     s.push(i);
// }

// s.peek();

// while (!s.isEmpty()) //clear stack
// {
//     s.pop();
// }

// for(int i=11;i>0;i--)
// {
//      s.pop();
// }

//     std::stack<int> p;//sintaxa
    
    //std::cout<<s.contains(12)<<std::endl;


    return 0;
}
//stack-ul are dimensiune finita - daca vrei push pe stack plin- stack overflow
//                               - daca vrei pop pe stack gol - stack underflowC