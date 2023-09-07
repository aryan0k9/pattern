#include <iostream>
using namespace std;

int main(){
    int x =1;
    int l=1,n=1;
    for (int i = 1; i < 5; i++)
    {
        int m = l;
        for (int j = 0; j < i; j++)
        {
           cout << m << " ";
            m--;
        }
        l = l + x + n;
        n++;
        cout << endl;
    }
}