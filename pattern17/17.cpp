#include <iostream>
using namespace std;

int main(){
    int l = 0;
    for (int i = 1; i <= 5; i++)
    {
        int x = l+1;
        for (int j = 0; j < 5; j++)
        {
            if(x<10){
                cout << " ";
            }
           cout << x << " ";
           x = x + 2;
        }
        l = l+2;
        cout << endl;
    }
}