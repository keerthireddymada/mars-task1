#include<stdio.h>
#include<stdlib.h>
void main()
{
    int r,c;
    printf("Enter the number of obstacles: ");
    scanf("%d",&r);
    int obstacles[r][4];
    for(int i=0; i <r;i++)
    {
        for(int j=0; j<4;j++)
        {
            scanf("%d",&obstacles[i][j]);
        }
    }
    /*let us consider the example 
    .   N   E   S   W
    1st 2   3   0   3
    2nd 5   1   0   2
    3rd 3   0   4   4
    4th 3   4   0   2
    since these are the distances of the respective obstacle in that respective direction,
    we can turn these into points of the form (x,y)*/
    int x[r], y[r];
    //arrays which will store x coordinates and y coordinates of the obstacle
    for(int i=0; i<r;i++)
    {
        y[i] = obstacles[i][0] - obstacles[i][2]; //north-south
        x[i] = obstacles[i][1] - obstacles[i][3]; //east - west
    }
    //to find n, we find max(max of absolute value of x coordinates, max of absolute value of y coordinates)
    //max of absolute value of x and max of absolute value of y
    int maxabsx=0;
    int maxabsy=0;
    for(int i=0; i<r;i++)
    {
        if(abs(x[i]) > maxabsx)
        {
            maxabsx = abs(x[i]);
        }
        if(abs(y[i]) > maxabsy)
        {
            maxabsy = abs(y[i]);
        }
    }
    //finding max of the above 2 values
    int finalmax;
    if(maxabsx > maxabsy)
    {
        finalmax = maxabsx;
    }
    else
    {
        finalmax = maxabsy;
    }
    /*now to get the max side of places on the opposite side as well as it is square matrix,
    we multiply with 2 and add 1 place for the origin*/
    int n = 2 * finalmax + 1;
    int arena[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n;j++)
        {
            arena[i][j] = 1;
        }
    }
    //marking obstacles in the arena
    //arena[finalmax][finalmax] will become origin
    int centre = finalmax;
    for(int i=0; i<r;i++)
    {
        int arenax = centre - y[i];
        int arenay = centre + x[i];
        arena[arenax][arenay] = 0;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arena[i][j]);
        }
        printf("\n");
    }
}
