#include <iostream>

using namespace std;

int main()
{
    //    cout << "Hello World!" << endl;
    /*

    [capture list] (parameter list) {function body}

    */
    // define lambda function with a variable name
    //    auto func = []()
    //    {
    //        cout << "hello world" << endl;
    //    };

    //    func();

    // define lambda function as to call it directly, it is like in the js programming
    // call the function itself

    //    [](){
    //        cout << "hello world" << endl;
    //    }();

    // define a lambada function takes parameters
    //    [](int a, int b){
    //        cout << a + b << endl;
    //    }(10, 11);

    // define labmda function returns something
    //    int sum = [](int a, int b) -> int{
    //      return a + b;
    //    }(10,11);

    //    cout << "sum of a + b -> " << sum << endl;

    // we can also cout the sum directly
    //    cout << "sum of a + b -> " << [](int a, int b) -> int{ return a + b;}(10,11) << endl;


    // what is CAPTURE LIST
    //    int a = 10, b = 11;
    //    [a, b]()
    //    {
    //        cout << "a ->: " << a << endl; // cannot capture variable defined outside of the lambda
    //    }();


    // capturing by value
    // lambda function makes a copy of the out val
    //    int c = 33;
    //    auto func = [c]()
    //    {
    //        cout << "the inner val of c ->: " << c << endl;
    //    };

    //    for (int i = 0; i < 5; i++)
    //    {
    //        cout << "the out val of c->: " << c << endl;
    //        func();
    //        c++;
    //    }


    // capturing by reference
    //    int c = 33;
    //    auto func = [&c]()
    //    {
    //        cout << "theinner val of c ->: " << c << endl;

    //    };

    //    for (int i = 0; i < 5;i++)
    //    {
    //        cout << "the out val of c->: " << c << endl;
    //        func();
    //        c++;
    //    }

    // capturing everything by val (this won't change the inner val)
    //    int c = 33;
    //    int d = 11;
    //    auto func = [=]()
    //    {
    //        cout << "the inner val of c ->: " << c << endl;
    //        cout << "the inner val of d ->: " << d << endl;

    //    };

    //    for (int i = 0; i < 5;i++)
    //    {
    //        cout << "the out val of c->: " << c << endl;
    //        cout << "the out val of d->: " << d << endl;
    //        func();
    //        c++;
    //        d++;
    //    }

    // capturing everything by reference
    int c = 0;
    int d = 1;
    auto func = [&]()
    {
        cout << "IN c: " << c << endl;
        cout << "IN d: " << d << endl;

    };

    for (int i = 0; i < 5;i++)
    {
        cout << "OUT c: " << c << endl;
        cout << "OUT d: " << d << endl;
        func();
        c++;
        d++;
    }




    return 0;
}

