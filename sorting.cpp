/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#define max 6
using namespace std;

int arr[max];
int u;
void bubbleSort( int n[]) {
    int a = max;
    for (int j = 0; j<a; ++j) {
            cin>>arr[u];
            if (arr[j] > arr[j + 1]) {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            }
    
       

int main()
{   
 
    bubbleSort(arr);
    cout<<bubbleSort(arr);
   

    
     return 0;
}
