#include <iostream>
using namespace std;

int main(){
    int k = 2;
    int inc = 2;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(k < 10){
                cout << " ";
            }
            cout << k << " ";
            k = 2*inc;
            inc++;
        }
        cout << endl;
    }
    
}