/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   BugTest.h
 * Author: minwu1
 *
 * Created on Mar 23, 2018, 5:18:42 PM
 */

#ifndef BUGTEST_H
#define BUGTEST_H

#include <cppunit/extensions/HelperMacros.h>

class BugTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(BugTest);

    CPPUNIT_TEST(testMethod);
    CPPUNIT_TEST(testFailedMethod);

    CPPUNIT_TEST_SUITE_END();

public:
    BugTest();
    virtual ~BugTest();
    void setUp();
    void tearDown();

private:
    void testMethod();
    void testFailedMethod();
};

#endif /* BUGTEST_H */

