#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a[4]={2,4,6,8};
    int b[4]= {1,3,5,7};
    int c[4]= {2,5,6,1};
    int d[4];
    
    for(int i = 0; i <4 ; i++){
        d[i]= a[i] + b[i] + c[i];
        cout<<d[i]<< " ";
    }
    return 0;
}
