//given an array a[10][7] stored in row major order and LB=1 and UB=1
//an element a[3][3] is stored at address 1024 and element a[5][4] is stored at address 1124
//find the address of a[4][6] and a[1][2]

//array is of order [m][n]

//ROW MAJOR ORDER
/*
1) 0,0
    add = BA + sizeofdatatype(n*j+k)

2) 1,1
    add = BA + sizeofdatatype(n*(j-1)+(k-1))
*/

//COLUMN MAJOR ORDER
/*
1) 0,0
    add = BA + sizeofdatatype(m*k+j)

2) 1,1
    add = BA + sizeofdatatype(m*(k-1)+(j-1))
*/
#include<iostream>
int main()
{
    return 0;
}