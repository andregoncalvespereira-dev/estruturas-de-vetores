#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a[4]={2,4,6,8};
    int b[4]= {1,3,5,7};
    int c[4];
    
    for(int i = 0; i <4 ; i++){
        c[i]= a[i] + b[i];
        cout<<c[i]<< " ";
    }
    return 0;
}
