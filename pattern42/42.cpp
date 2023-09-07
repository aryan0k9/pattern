#include <iostream>
using namespace std;

int main(){
    
    for (int i = 1; i <= 5; i++)
    {
        int x =i;
        for (int j = 1; j <= i; j++)
        {
            cout << x << " ";
            x++;
        }
        cout << endl;
    }
}