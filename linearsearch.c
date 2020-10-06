#include<stdio.h>

int linearSearch(int arr[],int size,int element)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }
    return -1;
}

main()
{

    int arr[]={1,3,5,56,4,3,23,4,5,3353,56,34};
    int size=sizeof(arr)/sizeof(int);
    int element=3353;
    int searchIndex=linearSearch(arr,size,element);
    printf("The element %d was found at index %d \n",element,searchIndex);
    getch();
}
