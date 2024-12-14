/*  Commpiling and running C++ file
    g++ file_name.cpp -Wall -o test.out
    ./test.out
*/

#include <iostream> // input output stream

/*
    int - return type of the function
    main - name of the function
    argc - number or arguments passed on the command line
    argv - an array of strings of the arguments passed on the command line
*/

using namespace std;

int main(int argc, char** argv){
    cout << "Hello, World" << endl;
    return 0;
}