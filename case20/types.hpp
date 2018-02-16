#include <string>
#include <vector>
#include <eosiolib/types.hpp>

using namespace std;

struct row {
   vector<uint64_t> cells;
};

//@abi action
struct my_action {
   uint64_t id;
   vector<row> rows;
};
