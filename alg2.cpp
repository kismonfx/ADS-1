int cbinsearch(int* arr, int size, int value)
{
    int left = 0;
    int right = size-1;
    int kol = 0;
    int i = 0;
    while (left <= right)
    {
       int mid = (left + right) / 2;
       if (arr[mid] == value)
          i = mid;
       if (arr[mid] < value)
          left = mid + 1;
       else 
          right = mid - 1;
     }
     while(arr[i] == value)
     {
        kol++;
        i--;
     }
     return kol;
}
