/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


int main()
{
    int a,b,c,d,q,w,e,r,t;
     cout  <<  "a = ";  cin >> a; 
     cout <<   "b = ";  cin >> b;
     cout  <<  "c = ";  cin >> c; 
     cout <<   "d = ";  cin >> d;
    q= (a + b)^3;  cout <<","<< q; w= (c - d)^4;  cout <<","<< w;
    e= (a + 2*a*b +b)^2;  cout <<","<< e; r= (c - 3*c*d^2 + 5)^2;  cout <<","<< r; t= 6*(b^2 - 4*a*c)^2;  cout <<","<< t;
    
    
}
