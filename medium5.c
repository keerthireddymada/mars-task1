#include<stdio.h>
#include<math.h>
float converttoradians(float degrees)
{
    return degrees*(3.14159/180);        //d/90 = 2c/ pi
}
void main()
{
    //so our three number system has (pitch,yaw,roll)
    float pitch,yaw,roll;
    printf("Enter the values of pitch, yaw, roll in degrees: ");
    scanf("%f %f %f", &pitch, &yaw, &roll);
    float p,ya,r;
    p = converttoradians(pitch);
    ya = converttoradians(yaw);
    r = converttoradians(roll);
    //now we find sines and cosines of half of the three angles
    float cosp = cos(p/2);
    float sinp = sin(p/2);
    float cosya = cos(ya/2);
    float sinya = sin(ya/2);
    float cosr = cos(r/2);
    float sinr = sin(r/2);
    /*now in the four number system which is called a quaternion, the format in which it is (w,x,y,z)
    w is the */
    float w = cosp * cosya * cosr + sinp * sinya * sinr;
    float z = cosp * cosya * sinr - sinp * sinya * cosr;
    float x = sinp * cosya * cosr - cosp * sinya * sinr;
    float y = cosp * sinya * cosr + sinp * cosya * sinr;
    printf("The four number system is (%.2f, %.2f, %.2f, %.2f)",w,x,y,z);
}