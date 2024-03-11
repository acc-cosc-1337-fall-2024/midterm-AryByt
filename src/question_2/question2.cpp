#include "question2.h"

bool test_config()
{
    return true;
}
std::vector<double> get_cookie_ingredients(int cookies) {
    double sugar_per_cookie = 1.5 / 48;
    double butter_per_cookie = 1.0 / 48;
    double flour_per_cookie = 2.75 / 48;

    return {sugar_per_cookie * cookies, butter_per_cookie * cookies, flour_per_cookie * cookies};
}