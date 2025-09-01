#include <iostream>
#include "../include/MathUtils.h"
#include "../include/AdvancedMath.h"

using namespace MathUtils;
using namespace AdvancedMath;
using namespace std;

int main()
{
    int x = 6;
    int y = 7;

    cout << add(x, y) << endl;
    cout << multiply(x, y) << endl;
    cout << square(x) << endl;

    return 0;
}