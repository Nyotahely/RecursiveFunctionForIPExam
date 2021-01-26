#include <iostream>
#include <vector>
using namespace std ;

int areOdd ( int d [] , int size )
{
    
    int i ; 
    int count = 0;
    if(size > 0 )
    {
        i = size-1 ;
        if (d[i]%2!=0)
        { 
           
            count += 1+areOdd ( d ,i );
        }
        else
        {
            
            count +=areOdd(d,i);
        }
        
        
        

    }
    return count;

}


int main ( )
{
     int size = 5;
     int d [size]= {3,2,3,3,3};
    
    cout << areOdd(d,size);
    return 0;


}
