#include <eoslib/types.hpp>

namespace ns1 {
   struct Simple {
      uint64_t u64;
   };
};

namespace ns2 {
   struct Simple {
      uint32_t u32;
   };
};

//@abi action
struct MyAction {
   uint64_t    id;
   ns1::Simple simple1;
   ns2::Simple simple2;
};