/* 
* PREPROCESSOR: c++ preprocessor is a program which processes the .cpp file before the compiler gets to do its job.
* there are preprocessor 'directives' which are commands to the preprocessor, such as #include. These directives are preceded by #
preprocessor prepares the file to be compiled
by the time of the compilation of the directives are worked and removed. Also comments are removed.
* by the time of the compilation of the directives are worked and removed. Also comments are removed.
* example of directives: #include, #if, #elif, #else, #pragma, #error, #endif, #line, ...
* with the #include the preprocessor includes all the needed c++ of the specified library. if you do conditional processing, like forinstance, if OS is windows, you can include some libray, or if its MacOS you can stop the program (#if #endif)...
* preprocessor gets the sourcecode ready for the compiler  */

/* 
* NAMESPACE: directive to namespace serves to diferenciate which code comes from each library to avoid naming conflict. For example, if the command 'cout' is also used in the 'zurp' library, we can use the namespace zurp::cout
* the :: is called scope resolution operator, to resolve the namespace used with which command
* the 'std' is c++ 'standard' namespace. So the command 'cout' from this namespaced has its scope clearly defined by the command std::cout.
* to simplify this, we c++ offers the 'using namespace' directive. This directive can be used to make a certain namespace globally available, without the need of prefixing the command with its namespace. E.g. using namespace std; We can also use it specifically for the command, to make sure you are not adding too much namespaces which may conflict with those of other libraries.
 */
/* The MAIN function always returns zero! */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    cout << "Tell us how many alegrias the Bolho has" << endl;
    int bolho_alegrias;
    cin >> bolho_alegrias;
    cout << "You wrote that the Bolho has " << bolho_alegrias << " alegrias" << endl;

    int my_integer;
    double my_double;
    cout << "Insert an integer and a double separated by a space"<< endl;
    cin >> my_integer >> my_double;
    cout << "You inserted the integer " << my_integer << " and the double " << my_double << endl;
    return 0;
}


