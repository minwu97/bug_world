#include "newtestclass1.h"
#include "Bug.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass1);

newtestclass1::newtestclass1() {
}

newtestclass1::~newtestclass1() {
}

void newtestclass1::setUp() {
}

void newtestclass1::tearDown() {
}

void newtestclass1::testBug() {
    Bug bug();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testBug2() {
    tcolor i_color;
    int i_progid;
    int i_resting;
    Bug bug(i_color, i_progid, i_resting);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testStart_resting() {
    Bug bug;
    bug.start_resting();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testRested() {
    Bug bug;
    bool result = bug.rested();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGet_progid() {
    Bug bug;
    int result = bug.get_progid();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGet_color() {
    Bug bug;
    tcolor result = bug.get_color();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGet_state() {
    Bug bug;
    tstate result = bug.get_state();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testSet_state() {
    tstate new_state;
    Bug bug;
    bug.set_state(new_state);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGet_direction() {
    Bug bug;
    tdirection result = bug.get_direction();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testSet_direction() {
    tdirection new_direction;
    Bug bug;
    bug.set_direction(new_direction);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGet_position() {
    Bug bug;
    tposition result = bug.get_position();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testSet_position() {
    tposition new_position;
    Bug bug;
    bug.set_position(new_position);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGet_food() {
    Bug bug;
    bool result = bug.get_food();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testSet_food() {
    bool new_food;
    Bug bug;
    bug.set_food(new_food);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testIs_dead() {
    Bug bug;
    bool result = bug.is_dead();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testKill() {
    Bug bug;
    bug.kill();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

