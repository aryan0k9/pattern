#include <iostream>
using namespace std;

int main(){
    
    for (int i = 5; i >= 1; i--)
    {
        int x=i;
        int y = 5-i+1;
        for (int j = 1; j <= 5; j++)
        {
            if(j%2==1){
                cout << x<< " ";
            }
            else{
                cout << y<<" ";
            }
            x=x+5;
            y = y+5;
        }
        cout << endl;
        
    }
}