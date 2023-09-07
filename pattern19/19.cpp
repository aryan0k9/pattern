#include <iostream>
using namespace std;

int main(){
    
    int x = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if((x+j)%2 == 1){
                cout << "1" << " ";
            }
            else{
                cout << "0" <<" ";
            }
        }
        if(x==0){
            x = 1;
        }
        else{
            x=0;
        }
        cout << endl;
    }
}