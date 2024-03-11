#include "question3.h"
#include <random>

bool test_config()
{
    return true;
}

int roll_die() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 6);
    return dis(gen);
}
