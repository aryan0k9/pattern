#include <iostream>
using namespace std;

int main(){
    
    int x = 2;
    int l = 2;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << x <<" ";
            x = 2*l;
            l++;
        }
        cout << endl;
    }
}