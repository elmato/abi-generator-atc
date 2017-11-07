#include <eoslib/types.hpp>

struct Simple {
   uint64_t u64;
};

typedef Simple SimpleAlias;

//@abi action
struct MyAction {
   uint64_t field;
   SimpleAlias simple;
};