#include <iostream>
#include "MathUtils.h"
#include "AdvancedMath.h"

using namespace MathUtils;
using namespace AdvancedMath;
using namespace std;

int main()
{
    int x = 3;
    int y = 4;

    cout << "a + b = " << add(x, y) << endl;
    cout << "a * b = " << multiply(x, y) << endl;
    cout << "square(a) = " << square(x) << endl;

    return 0;
}
