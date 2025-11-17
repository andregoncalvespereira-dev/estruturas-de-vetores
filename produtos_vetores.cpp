#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a[3]={2,3,4};
    int b[3]= {5,6,7};
    int produto = 0;
    
    for(int i = 0; i <3 ; i++){
        produto += a[i] * b[i];
     
    }
    
    cout << "Produto escalado: " << produto <<endl;
    return 0;
}
