#include <iostream>
using namespace std;

int main(){
    
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if(i*j < 10){
                cout << " ";
            }
            cout << i*j << " ";
        }
        cout << endl;
    }
}