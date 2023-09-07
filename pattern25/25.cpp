#include <iostream>
using namespace std;

int main(){
    int x=1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if((j+x) % 2 == 1){
                cout << "1" << " ";
            }
            else{
                cout << "0" << " ";
            }
        }
        cout << endl;
    }
}