#include <eosiolib/types.hpp>

struct A {
   uint64_t param3;
};
struct B {
   uint64_t param2;
};

//@abi action
struct C : A,B {
   uint64_t param1;
};