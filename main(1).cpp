#include <iostream>

using namespace std;

int main()
{
   int arr[10], m, x, max, min;
   cout<<"enter the size of the array : ";
   cin >>m;
   cout<<"enter the elements of the array  :";
   for (x=0; x<m; x++)
    cin>>arr[x];
   max =arr[0];
   for (x=0; x<m; x++)
   {
       if (max < arr[x])
        max=arr[x];
   }
   min=arr[0];
   for(x=0; x<m; x++)
   {
       if (m > arr[x])
        min =arr[x];
   }
   cout  << "largest element : " <<max ;
   cout << "smallest element : " << min ;
   return 0;
}
