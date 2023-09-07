#include <iostream>
using namespace std;

int main(){
    
    int x = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(x<10){
                cout << " ";
            }
            cout << x << " ";
            x+=2;
        }
        
        cout << endl;
    }
}