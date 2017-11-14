# Case 10

## ATC (Acceptance Test Criteria)
- Try to generate ABI spec file with a table with an undetermined index type
- Verify ABI generator throws an error
- Verify the ABI json file is not generated

## Command Run
```
eoscpp -g case10.abi types.hpp
```

## Result
```bash
➜  case10 git:(master) ✗ eoscpp -g case10.abi types.hpp
2729782ms thread-0   main.cpp:58                   main                 ] 999999 abi_generation_exception: Unable to generate abi
false: Unable to guess index type
    {}
    thread-0  abi_generator.hpp:250 guess_index_type

    {"type_name":"MyTable"}
    thread-0  abi_generator.hpp:173 handle_decl

    {}
    thread-0  abi_generator.hpp:194 handle_decl

    {"decl_location":"/home/matu/dev/abi-generator-atc/case10/types.hpp:4:8"}
    thread-0  abi_generator.hpp:551 handle_tagdecl_definition
2729782ms thread-0   main.cpp:58                   main
```

## Conclusion
Test Pass.
ABI generator throws an error (Unable to guess index type)
ABI file is not generated
