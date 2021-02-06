#include "homework.h"
int minElement (int* first_elem, int* last_elem)// first - указатель на первый элемент массива, last - указатель на последний элемент массива
{
    return minElement(first_elem, last_elem - first_elem +1) ;
}
