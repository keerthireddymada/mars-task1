#include<stdio.h>
#include<math.h>
void distancebefore(float x, float y)
{
    int z=-60; //given
    float distance;
    distance = sqrt(x * x + y * y + z * z);
    printf("distance between the marker and camera before changing the navigation reference is %.2f\n",distance);
}
void distanceafter(float finalx, float finaly, float finalz)
{
    float distance;
    distance = sqrt(finalx * finalx + finaly * finaly + finalz * finalz);
    printf("distance between the marker and camera after changing the navigation reference is %.2f\n",distance);
}
void main()
{
    float x,y;
    printf("The camera's detection coordinates are (x,y,-60)\n");
    printf("Enter the values of x and y: \n");
    scanf("%f %f",&x,&y);
    float x_final, y_final, z_final;
    float p,q;
    //Changing frame of reference from camera to rover's centre
    x_final = x - p;
    //p is distance between centre of rover and camera along x axis
    //we subtract because camera is at the front and we should come back to centre of the rover
    y_final = y - q;
    //q is distance between centre of rover and camera along y axis
    //along z axis the value is constant= -60
    x_final = x_final + 55;
    //since rover is 55cm behind the marker, it needs to move forward
    z_final = 0; //marker on ground
    // let us consider example values for p and q
    p = 20;
    q = 10;
    printf("The new position of the marker w.r.t new frame of reference is : (%.2f, %.2f, %.2f)\n",x_final, y_final, z_final);
    distancebefore(x,y);
    distanceafter(x_final, y_final, z_final);
}