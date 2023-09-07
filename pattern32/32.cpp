#include <iostream>
using namespace std;

int main(){
    
    for (int i = 65; i <= 69; i++)
    {
        int x = i;
        for (int j = 0; j < 5; j++)
        {
            cout << char(x) << " ";
            x+=5;
        }
        cout << endl;
    }
}