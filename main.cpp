#include "boiler.h"

using namespace std;

int main() {
    Boiler myBoiler = inputBoiler();

    cout << "My Boiler:\n";
    printBoiler(myBoiler);

    return 0;
}