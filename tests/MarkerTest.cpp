#include "MarkerTest.h"
#include "Marker.h"


CPPUNIT_TEST_SUITE_REGISTRATION(MarkerTest);

MarkerTest::MarkerTest() {
}

MarkerTest::~MarkerTest() {
}

void MarkerTest::setUp() {
}

void MarkerTest::tearDown() {
}

void MarkerTest::testMarker() {
    Marker marker();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void MarkerTest::testSet_marker() {
    tmark mark;
    tcolor col;
    Marker marker;
    marker.set_marker(mark, col);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void MarkerTest::testClear_marker() {
    tmark mark;
    tcolor col;
    Marker marker;
    marker.clear_marker(mark, col);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void MarkerTest::testCheck_marker() {
    tmark mark;
    tcolor col;
    Marker marker;
    bool result = marker.check_marker(mark, col);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void MarkerTest::testCheck_other_marker() {
    tcolor col;
    Marker marker;
    bool result = marker.check_other_marker(col);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

