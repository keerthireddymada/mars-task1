#include<stdio.h>
void uppercase(char a[])
{
    int i=0;
    while(a[i] != '\0')
    {
        if(a[i]>='a' && a[i]<= 'z')
            a[i] = a[i]-32; 
    i++;                      //ascii difference between uppercase and lowercase is 32
    }
}                            //ascii of 'a' is 97 and that of 'A' is 65
void main()
{
    char input[50];
    printf("Enter your input: ");
    scanf("%s",input);
    uppercase(input);
    char output[50];
    for(int i=0;input[i] != '\0';i++)
    {
        output[i] = input[i] - (i+1);  //removes i+1 from ascii of the input letter to get the ascii of the output letter
    }
    printf("%s",output);
    
}