#include <string>
#include <eosiolib/types.hpp>

//@abi table i64
struct MyTable {
   uint8_t     pk0;
   uint16_t    pk1;
   uint8_t     pk2;
   uint64_t    pk3;
   std::string str;
};
