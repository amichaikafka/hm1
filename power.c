#include <stdio.h>
#include "myMath.h"
double Power(double x , int y) {
    if(y>0){
    double p=x;
    for(int i=1;i<y;i++){
        x=p*x;
       
    }
    }else if(y==0){
        return 1;
    }else{
       double p=x;
    for(int i=1;i<-y;i++){
        x=p*x;
       
    }  
    x=1/x;
    }
    return x;
}

double Exponent(int x) {
    double d= Power(e,x);
   
    return d;

}
