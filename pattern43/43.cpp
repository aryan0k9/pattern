#include <iostream>
using namespace std;

int main(){
    int l = 1;
    for (int i = 1; i <= 10; i+=2)
    {
        int x = i;
        for (int j = 1; j <= l ; j++)
        {
            cout << x << " ";
            x+=2;
        }
        l++;
        cout << endl;
    }
}