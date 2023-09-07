#include <iostream>
using namespace std;

int main(){
    
    for (int i = 1; i <= 5; i++)
    {
        int k = i;
        for (int j = 1; j <= 5; j++)
        { 
            if (k < 10)
            {
                cout << " ";
            }
            
            cout << (k) << " ";
            k = (k + 5);
            
        }
        cout << endl;
    }
    
}