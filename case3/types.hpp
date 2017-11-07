#include <eoslib/types.hpp>
#include <eoslib/string.hpp>

//@abi action
struct SimpleAction{
   eos::string             str;
   Time                    time;
   Checksum                chk;
   Signature               sig;
   PublicKey               pub;
   FixedString32           s32;
   FixedString16           s16;
   Bytes                   bytes;
   uint8_t                 u8;
   uint16_t                u16;
   uint32_t                u32;
   uint64_t                u64;
   uint128_t               u128;
   int8_t                  i8;
   int16_t                 i16;
   int32_t                 i32;
   int64_t                 i64;
   eos::Name               name;
   AccountName             accountname;
};