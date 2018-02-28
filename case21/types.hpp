#include <string>
#include <vector>
#include <eosiolib/types.hpp>
#include <eosiolib/print.hpp>

using namespace std;

struct row {
  std::vector<uint32_t> cells;
};

typedef vector<row> array_of_rows;

//@abi action
struct my_action {
   uint64_t id;
   array_of_rows rows;
};