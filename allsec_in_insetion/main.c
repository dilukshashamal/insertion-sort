#include<stdio.h>

void main()
{
    int arr[]={64,25,12,22,11};
    int size=5,i;
    //user_input();
    //descinsertionsort(arr,size);
   // printf("\n\n\n");
    insertionsort(arr,size);
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}
void descinsertionsort(int arr[],int size)
{
    int i,j,key;
    for(i=1;i<size;i++)
    {
        key=arr[i];
        for(j=i-1;j>=0 && arr[j]<key;j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;
    }}
    void insertionsort(int arr[],int size)
{
    int i,j,key;
    for(i=1;i<size;i++)
    {
        key=arr[i];
        for(j=i-1;j>=0 && arr[j]>key;j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;
    }
}
void user_input()
{
    int i, j, count, temp, number[25];

   printf("How many numbers u are going to enter?:");
   scanf("%d",&count);

   printf("Enter %d elements:\n", count);

   for(i=0;i<count;i++)
      scanf("%d\n",&number[i]);


   for(i=1;i<count;i++){
      temp=number[i];
      j=i-1;
      while((temp<number[j])&&(j>=0)){
         number[j+1]=number[j];
         j=j-1;
      }
      number[j+1]=temp;
   }

   printf("Order of Sorted elements:\n");
   for(i=0;i<count;i++)
      printf("%d",number[i]);
}

