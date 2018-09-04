#include <iostream>
using namespace std;
// if we don't use this line of code, we will get some sorta of error when we use some output function like cout and endl aswell as string(string is redefined by c++ where the char data type was in c lang)
//using namespace std;

int main()
{
    // output in cplusplus
    std::cout << "hello world" << std::endl;
//    cout << "Hello World!" << endl;
    std::cerr << "error occured" << std::endl;
    std::clog << "log message" << std::endl;

    // input in cplusplus
    std::string name;
    std::cout << "type your name??   ";
    std::cin >> name;
    std::cout << "ok, your name is " << name << " , thank you!!!" << std::endl;


    // data type review
    std::string hello = "hello world";
    int count = 10;   // int is not in the scope of std
    std::cout << "The message is: " << hello << std::endl;
//    std::cout << "the count is: " << count << std::endl;

    cout << "size of int: " << sizeof(int) << "bytes" << endl;
    cout << "size of char: " << sizeof(char) << "bytes" << endl;
    cout << "size of bool: " << sizeof(bool) << "bytes" << endl;
    cout << "size of float: " << sizeof(float) << "bytes" << endl;
    cout << "size of double: " << sizeof(double) << "bytes" << endl;
    cout << "size of string: " << sizeof(string) << "bytes" << endl;
    cout << "size of wchar_t: " << sizeof(wchar_t) << "bytes" << endl;
    // unsigned signed short long



    // cplusplus operator


    return 0;

}

