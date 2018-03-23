
#ifndef MARKERTEST_H
#define MARKERTEST_H

#include <cppunit/extensions/HelperMacros.h>

class MarkerTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(MarkerTest);

    CPPUNIT_TEST(testMarker);
    CPPUNIT_TEST(testSet_marker);
    CPPUNIT_TEST(testClear_marker);
    CPPUNIT_TEST(testCheck_marker);
    CPPUNIT_TEST(testCheck_other_marker);

    CPPUNIT_TEST_SUITE_END();

public:
    MarkerTest();
    virtual ~MarkerTest();
    void setUp();
    void tearDown();

private:
    void testMarker();
    void testSet_marker();
    void testClear_marker();
    void testCheck_marker();
    void testCheck_other_marker();

};

#endif /* MARKERTEST_H */

