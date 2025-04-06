#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void muchiko(int data[],int final[], int size, int window)
{
    for(int i=0; i <= size - window; i++)
    {
        int sum=0;
        for(int j=i; j < i+window ;j++)
        {
            sum = sum + data[j];
        }
        final[i]=sum/window;          //storing average in the array
    }
}
void sort(int a[], int n)             //bubble sorting
{
    for(int i=0; i<n-1;i++)
    {
        for(int j=0; j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void sanchiko(int data[], int final[], int size, int window)
{
    int windowarr[window];
    for(int i=0; i<= size-window; i++)
    {
        for(int j=0; j<window; j++)
        {
            windowarr[j]= data[i+j];
        }
        sort(windowarr,window);
        final[i]= windowarr[window/2];            //storing median in the array
    }
}
void main()
{
    int readings[MAX];
    FILE *fptr;
    fptr = fopen("log.txt","w");
    //writing input
    if(fptr ==NULL)
    {
        printf("File type invalid.");
        exit(1);
    }
    int size;
    printf("Enter the number of readings: ");
    scanf("%d",&size);
    printf("Enter the readings: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&readings[i]);
        fprintf(fptr, "%d ",readings[i]);
    }
    fclose(fptr);
    fptr = fopen("log.txt","r");
    //reading the file
    if(fptr ==NULL)
    {
        printf("File type invalid.");
        exit(1);
    }
    int num;
    for(int i=0; i<size; i++)
    {
        fscanf(fptr, "%d", &readings[i]);
    }
    int window;
    printf("Enter window size: ");
    scanf("%d",&window);
    int flag=0;
    int final[MAX];
    for(int i=0; i<size-1;i++)
    {
        if(abs(readings[i]-readings[i+1]) > 4)  //indicating something like the numbers with difference more than 5(large differences) will use sanchiko
        {
            flag=1;
            break;
        }
    }
    //printing windows
    for(int i=0; i<= size - window; i++)
    {
        printf("Window %d: ",i+1);
        for(int j=0; j<window;j++)
        {
            printf("%d ", readings[i+j]);
        }
        printf("\n");
    }
    if(flag)
    {
        sanchiko(readings,final,size,window);   //when data is having sudden jumps
        printf("We use sanchiko(median)\n");
    }
    else
    {
        muchiko(readings,final,size,window);      //when data is not that sudden
        printf("We use muchiko(average)");
    }
    //final values after filtering
    for(int i=0; i<=size-window; i++)
    {
        printf("Filtered value %d: %d\n",i+1,final[i]);
    }
    fclose(fptr);
}

