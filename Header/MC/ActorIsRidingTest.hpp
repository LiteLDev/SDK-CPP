// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorIsRidingTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORISRIDINGTEST
public:
    class ActorIsRidingTest& operator=(class ActorIsRidingTest const&) = delete;
    ActorIsRidingTest(class ActorIsRidingTest const&) = delete;
    ActorIsRidingTest() = delete;
#endif

public:
    /*0*/ virtual ~ActorIsRidingTest();
    /*2*/ virtual bool evaluate(struct FilterContext const&) const;
    /*4*/ virtual class gsl::basic_string_span<char const, -1> getName() const;
    /*
    inline  ~ActorIsRidingTest(){
         (ActorIsRidingTest::*rv)();
        *((void**)&rv) = dlsym("??1ActorIsRidingTest@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};