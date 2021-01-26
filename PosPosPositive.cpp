#include <iostream>
using namespace std;

bool arePositve ( int d [] , int size  )
{
    int i ;
    bool test = true;
   if (size > 0) { 
       i=size-1;
    if (d[i]<0)
    {
        test = false;
    }
     if (test==true)
      {
          test = arePositve(d,i);
        
     }
   }
    return test;
    
    

}


int main ( )
{
     int size = 5;
     int d [size]= {3,3,3,-3,3};
    
    cout << arePositve(d,size);
    return 0;


}


