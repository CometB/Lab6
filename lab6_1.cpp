#include<iostream>

using namespace std;

int n;

void inputN(){
    cout << "Enter an integer: ";
    cin >> n;
}

int main(){
    
    int even = 0;
    int odd = 0;
    
    inputN();
    while(n != 0){
        if(n%2 == 0){
            even++;
        } else{
            odd++;
        }
        inputN();
    }
    
    cout << "#Even numbers = " << even << '\n';
    cout << "#Odd numbers = " << odd << '\n';
    return 0;
}