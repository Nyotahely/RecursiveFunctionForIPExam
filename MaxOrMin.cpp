#include <iostream>
using namespace std;



int CalcMinValue(int arr[], int n) {
   return (n == 1) ? arr[0] : min(arr[n - 1], CalcMinValue(arr, n - 1));
}
int CalcMaxValue(int arr[], int n) {
   return (n == 1) ? arr[0] : max(arr[n -1], CalcMinValue(arr, n - 1));
}
int main() {
   int arr[] = {2, 1, 6, 9, 4, 10, 15, 21};
   int N = 8;
   cout<<"Maximum Value = "<<CalcMaxValue(arr, N)<<endl;
   cout<<"Minimum Value = "<<CalcMinValue(arr, N);
   return 0;
}
