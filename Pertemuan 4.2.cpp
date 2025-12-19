#include <iostream>
using namespace std;

int main()
{
    int baris = 3;
    int kolom = 4;
    
    for(int m = 1; m <= baris; m++ ){
        for(int n = 1; n <= kolom; n++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    

    return 0;
}
