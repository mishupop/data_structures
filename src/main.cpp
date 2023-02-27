#include <iostream>
#include <algorithm>


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
std::sort(my_array,my_array+arr_size);
return my_array[arr_size-1];

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
    int test[]={8,2,1,3,5,4,7,6};

    if(findElement(test,8,7 ))
    {
        std::cout<<"am gasit 7\n";
    }
    else
    std::cout<<"n-am gasit\n";

    std::cout<<find_max_elem(test,8)<<std::endl;//utilizand sort()-O(n log n)+ O(1)???
    std::cout<<find_max(test,8)<<std::endl;// fara a utiliza sort()- O(n)


    return 0;
}
