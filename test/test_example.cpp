// More information about PlatformIO Unit Testing:
// https://docs.platformio.org/en/latest/advanced/unit-testing/index.html

#include <Arduino.h>
#include <unity.h>

void test_example()
{
    TEST_ASSERT_TRUE_MESSAGE(true, "This is a placeholder test that always passes");
}

/*------------------------------------------------------------------------------
 * SETUP AND TEST RUNNER
 *----------------------------------------------------------------------------*/

void setUp()
{
    // Any setup needed before each test
}

void tearDown()
{
    // Any cleanup needed after each test
}

void tests()
{
    RUN_TEST(test_example);
}

void setup()
{
    // NOTE!!! Wait for >2 secs
    // if board doesn't support software reset via Serial.DTR/RTS
    delay(3000);

    UNITY_BEGIN();
    tests();
    UNITY_END();
}

void loop()
{
}
