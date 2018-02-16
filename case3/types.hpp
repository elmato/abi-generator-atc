#include <string>
#include <eosiolib/types.hpp>
#include <eosiolib/vector.hpp>

using namespace eosio;
using namespace std;

//@abi action
struct SimpleAction{
   string                  str;
   time                    time;
   checksum                chk;
   signature               sig;
   public_key              pub;
   fixed_string32          s32;
   fixed_string16          s16;
   bytes                   bytes;
   uint8_t                 u8;
   uint16_t                u16;
   uint32_t                u32;
   uint64_t                u64;
   uint128_t               u128;
   int8_t                  i8;
   int16_t                 i16;
   int32_t                 i32;
   int64_t                 i64;
   name                    name;
   account_name            accountname;
};
