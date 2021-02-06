#include <algorithm>
void rotate(int* first_elem, int* last_elem)
{
    std::reverse(first_elem, last_elem + 1);
}
// first - указатель на первый элемент массива, last - указатель на последний элемент массива
