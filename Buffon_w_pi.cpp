/*

Buffon First try:  this uses pi to calculate pi

*/

#define _USE_MATH_DEFINES
#include <cmath>
#include <stdlib.h> 
#include <time.h> 
#include <iostream>
using namespace std;


int main(){
    
    /*
        Variables:
            l: length of the needle
            t: space between  adjacent slats
            n: number of 'hits'
            N: number of iterations
            theta: angle between needle and the slat
    */
    double l,t,x,n,N,theta,pi; 
    srand(time(NULL));
    N=1000000;
    l=1;
    t=2;
    n=0;
    
    for (int i = 1; i <= N; i++) { 
        
        theta=(double)rand()/(RAND_MAX)*((M_PI/2));
        x=(double)rand()/(RAND_MAX)*((t/2));
        
        if(x <= (l/2)*sin(theta)){  
            n=n+1;   
            }
        }
    pi = (2*l*N)/(n*t);
    cout << pi;
    
    return 0;
}