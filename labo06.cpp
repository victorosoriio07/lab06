#include <iostream>
using namespace std;

int main (){
    int n = 0;

    cout << "Ingrese e numero con el que quiere empezar la cuenta regresiva." << endl;
    cin >> n;

    for(int i =n; i>=0;i--)
        cout << i<<endl;
    
   

    return 0;


}