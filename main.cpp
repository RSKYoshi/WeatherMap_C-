
//boilerplate template below
//iostream=input/output stream. Specifies name in standard library. Allows screen printing or getting something from the user.
#include <iostream>

//    std = standard library. Akin to a bucket of features available to dev.
//    below code = declare std a global...now I can access all objects in  the std namespace;
//namespace = scope
using namespace std;

//Unix & Win32 need a small integer returned from a process after executing (return 0)
int main() {

    //    cout=character output
    //    '<<' = stream insertion operator--acts like a '+'
    //    Because std was declared above as a global, no need to attach it to cout (std::cout)  
    //    Also, there is no hoisting!!! Declarations must come before assignment.
    cout << "Hello World!/Project" << endl;
    return 0;
}