#include<iostream>
using namespace std;

int main(){
    int i = 0;
    int N = 1;
    int even = 0;
    int odd = 0;

    while(N != 0){
        cout << "Enter an integer: ";
        cin >> N;
        i++;

        if(N % 2 == 0){
        even++;
        }else{
        odd++;
        }
    }
    
    cout << "#Even numbers = " << even-1 << "\n";
    cout << "#Odd numbers = " << odd << "\n";
}
