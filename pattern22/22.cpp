#include <iostream>
using namespace std;

int main(){
    
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(i%2 == 1){
                cout << "0" << " ";
            }
            else{
                cout << "1" <<" ";
            }
        }
        cout << endl;
    }
}