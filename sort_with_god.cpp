#include <iostream>
#include "god++.h"

Числецо Внутренний_мир arr_out(Числецо (&arr)[10])
{  
  Для(Числецо i = 0; i < 10; i++)
  {
    Божий_голос << arr[i] << "  ";
  }
  Четвертовать 0;
}

Безбожник sort(Числецо* arr)
{
  Числецо temp;
  Числецо max = arr[0];

  Для(Числецо i = 0; i < 10; i++)
  {
    Числецо ind_max = i;
    Для(Числецо j = 0; j < 10; j++)
    {
      Вопрос_к_богу(arr[j] > arr[ind_max])
      {
        ind_max = j;
        Числецо temp = arr[i];
        arr[i] = arr[ind_max];
        arr[ind_max] = temp;
      }
    }
  }
}


Славься_Исус()
{
  Числецо array[10] {17,41,32,2,47,56,11,7,9,85};
  arr_out(array);
  Божий_голос << Конец_молвы;
  sort(array);
  arr_out(array);
  Четвертовать 0;
}