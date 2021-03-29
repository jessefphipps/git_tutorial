#include <iostream>
#include <string>

using namespace std;


void output (string input){
    cout << "Here's the input: " << input << endl;
}

int main (){
    string input;
    cin >> input;
    output(input);
    return 1;
}