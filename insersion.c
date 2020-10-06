#include<stdio.h>

void display(int arr[],int n)
{
    //Traversal
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n"),arr[i];
    }
    printf("\n");
}

int indInsertion(int arr[],int size,int element,int capacity,int index)
{
    //Insertion
    int i;
    if(size>=capacity){
        return -1;
    }
    for(i=size-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}

main()
{
    int arr[100]={7,8,12,27,88};
    int size=5,element=45,index=3;
    display(arr,size);
    indInsersion(arr,size,element,100,index);
    size+=1;
    display(arr,size);
    getch();

}
