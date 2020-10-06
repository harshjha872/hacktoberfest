#include<stdio.h>

int binarySearch(int arr[],int size,int element)
{
  int low,mid,high;
  low=0;
  high=size-1;
    //start searching
  while(low<=high)
  {
        mid=(low+high)/2;
    if(arr[mid]==element)
    {
        return mid;
    }
    if(arr[mid]<element)
    {
        low=mid+1;
    }
    else
    {
        high=mid-1;
    }
  }
    //end searching
    return -1;
}


main()
{

    int arr[]={1,3,5,67,87,98,987,1432};
    int size=sizeof(arr)/sizeof(int);
    int element=987;
    int searchIndex=binarySearch(arr,size,element);
    printf("The element %d was found at index %d \n",element,searchIndex);
    getch();
}

