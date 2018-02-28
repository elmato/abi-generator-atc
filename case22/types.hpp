#pragma once

#include <eosiolib/eosio.hpp>
#include <eosiolib/dispatcher.hpp>

using namespace eosio;
using namespace std;

namespace noop {

   class noop {
      public:
         
         //@abi action
         ACTION( N(noop), anyaction) {
            anyaction() { }
            anyaction(account_name f, const string& t, const string& d): from(f), type(t), data(d) { }
            
            account_name from;
            string type;
            string data;
            
            EOSLIB_SERIALIZE(anyaction, (from)(type)(data))
         };

         static void on(const anyaction& act)
         {
            require_auth(act.from);
         }
   };
} /// noop
