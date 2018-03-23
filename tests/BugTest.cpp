#include "BugTest.h"


CPPUNIT_TEST_SUITE_REGISTRATION(BugTest);

BugTest::BugTest() {
}

BugTest::~BugTest() {
}

void BugTest::setUp() {
}

void BugTest::tearDown() {
}

void BugTest::testMethod() {
    CPPUNIT_ASSERT(true);
}

void BugTest::testFailedMethod() {
    CPPUNIT_ASSERT(false);
}

