#include "unity.h"
#include "guessgame.h"


/* Required by the unity test framework */
void setUp()
{

}
/* Required by the unity test framework */
void tearDown()
{

} 
void test_guess(void){
    int n=5, guess=5;
    TEST_ASSERT_EQUAL_string(n, guess,"your guess is correct");
}
int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_game);
    return UNITY_END();
}