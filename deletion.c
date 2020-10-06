#include<stdio.h>
#include<conio.h>

void display(int arr[],int n);
void indDeletion(int arr[],int size,int index);

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

void indDeletion(int arr[],int size,int index)
{
    //Deletion
    int i;
    for(i=index;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
}

main()
{
    int arr[100]={7,8,12,27,88};
    int size=5,index=3;
    clrscr();
    display(arr,size);
    indDeletion(arr,size,index);
    size-=1;
    display(arr,size);
    getch();

}
