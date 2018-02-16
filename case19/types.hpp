#include <string>
#include <vector>
#include <eosiolib/types.hpp>

using namespace std;

//@abi action
struct MyAction {
   vector<uint8_t> data;
   std::string     str;
};
