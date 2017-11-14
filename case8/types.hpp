#include <eoslib/types.hpp>
#include <eoslib/string.hpp>

struct MyKey {
   uint64_t part1;
   uint64_t part2;
};

//@abi table
struct MyTable {
   MyKey        key1;
   uint128_t    key2;
   eosio::string  str;
};
