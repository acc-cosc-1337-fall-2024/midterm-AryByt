#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
TEST_CASE("Testing get_cookie_ingredients function") {
    REQUIRE(get_cookie_ingredients(24)[0] == Approx(0.75));
    REQUIRE(get_cookie_ingredients(24)[1] == Approx(0.5));
    REQUIRE(get_cookie_ingredients(24)[2] == Approx(1.375));

	REQUIRE(get_cookie_ingredients(48)[0] == Approx(1.5));
    REQUIRE(get_cookie_ingredients(48)[1] == Approx(1.0));
    REQUIRE(get_cookie_ingredients(48)[2] == Approx(2.75));

    REQUIRE(get_cookie_ingredients(96)[0] == Approx(3.0));
    REQUIRE(get_cookie_ingredients(96)[1] == Approx(2.0));
    REQUIRE(get_cookie_ingredients(96)[2] == Approx(5.5));
}