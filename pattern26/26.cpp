#include <iostream>
using namespace std;

int main(){
    
    for (int i = 65; i <= 69; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << char(i) << " ";
        }
        cout << endl;
    }
}