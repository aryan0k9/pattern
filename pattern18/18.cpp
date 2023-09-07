#include <iostream>
using namespace std;

int main(){
    int x=1;
    for (int i = 1; i <= 5; i++)
    {
        
        for (int j = 1; j <= 5; j++)
        {
            if((j+x)%2 == 0){
                cout << "0" << " ";
            }
            else{
                cout << "1" <<" ";
            }
        }
        if(x==1){
            x = 0;
        }
        else{
            x = 1;
        }
        cout << endl;
    }
}