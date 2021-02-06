#include <algorithm>
int minElement(int* array, int size)  // array - указатель на массив, size - размер массива
{
  return *(std::min(array, array + size));
}
