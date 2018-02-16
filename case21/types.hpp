#include <string>
#include <vector>
#include <eosiolib/types.hpp>

using namespace std;

// template <typename T>
// struct row {
//    vector<T> cells;
// };

// typedef row<uint64_t> row64;

struct row64 {
   vector<uint64_t> cells;
};

//typedef vector<row64> array_of_rows;
using array_of_rows = vector<row64>;

//@abi action
struct my_action {
   uint64_t id;
   array_of_rows rows;
};
