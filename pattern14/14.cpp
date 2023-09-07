#include <iostream>
using namespace std;

int main(){
    
    for (int i = 5; i >= 1; i--)
    {
        int x = i;
        for (int j = 0; j < 5; j++)
        {
            if(x < 10){
                cout << " ";
            }
           cout << x << " ";
           x=x+5;
        }
        cout << endl;
    }
}