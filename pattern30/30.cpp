#include <iostream>
using namespace std;

int main(){
    
    int x = 65;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << char(x) << " ";
            x++;
        }
        cout << endl;
        
    }
}