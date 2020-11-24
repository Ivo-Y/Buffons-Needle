/*
    This one does not make  use of pi in generating PI
*/

#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <stdlib.h> 
#include <time.h> 
using namespace std;


int main(){
    /*
        Varaibles:
            l     :  the length of the needle
            l_c   :  the centre of the needle
            l_t   :  the tip of the needle
            d     :  the distance between adjacent slats
            y     :  randomly generated y coord
            x     :  randomly generated x coord
            n     :  number of 'hits
            N     :  number of iterations
            r     :  radius  of  a circle (with radius 1)
            cc    :  used as a test variable
    */
    double l,l_c,l_t,d,y,x,n,N,r;
    int cc;
    srand(time(NULL));
       
    N=10000000;
    l=0.5;
    l_c=0;
    d=1;
    n=0;
    r=0;
    l_t=0;
    
    for (int i = 1; i <= N; i++) { 
        //generates the centre of the needle in the first half 
        //between the slats
        l_c =(double)rand()/(RAND_MAX)*(d*0.5);
        cc=0;
        while(cc==0){
            
            //generates x,y coords between the slat
            x=(double)rand()/(RAND_MAX)*(1);
            y=(double)rand()/(RAND_MAX)*(1);
            
            //cout << x <<" " << y << endl;
            r=sqrt(x*x+y*y);
            
            if(r <= 1){
                cc=1;
                
            }
        }
        //calculates where the tip of the needle is
        // x/r acts as an asin function (generating the same distrobution  of the first method)
        l_t = (l_c - (l * 0.5) * (x/r));
        
        //if it crosses the  slat
        if (l_t < 0){
            n = n + 1;
        }        
        
        
    }
    
    cout << ((2*l*N)/(n))/d;
    
    
    return 0;
}