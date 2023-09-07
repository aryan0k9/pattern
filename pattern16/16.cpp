#include <iostream>
using namespace std;

int main(){
    
    for (int i = 1; i <= 5; i++)
    {
        int x = i;
        for (int j = 0; j < 5; j++)
        {
            cout << x << " ";
            x++;
        }
        cout << endl;
    }
}