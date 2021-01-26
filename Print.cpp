#include <iostream>
#include <vector>
using namespace std ;

void print ( int d[],int size)
{
    static int i  ;
    if( i == size )
    {
        i=0;
        cout << endl;
        return ;
    }
    cout << d[i]<<" ";
    i++;
    print(d,size);
}


int main ( )
{
     int size = 5;
     int d [size]= {3,2,3,3,3};
    
     print(d,size);
    return 0;


}
