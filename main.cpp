#include <iostream>
#include <example_lib/MyLib.h>

using namespace std;

int main() {
    // Create our library properties.
    MyLibProperties* p = CreateLibProperties("MyCustomLibrary", 5);

    // Print our library properties.
    DisplayLibProperties(p);

    // Delete our library properties.
    DeleteProperties(p);
    p = 0;
    return 0;
}