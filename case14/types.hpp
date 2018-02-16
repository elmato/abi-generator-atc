#include <eosiolib/types.hpp>

struct MyType {
   uint64_t u64;
   uint32_t u32;
};

typedef MyType MyTypeAlias;

//@abi table
struct MyTable {
   uint64_t id;
   MyTypeAlias alias;
};