# Case 1

## ATC (Acceptance Test Criteria)

- Try to generate ABI spec file having an unsupported C++ type in a struct
- Verify ABI generator throws an error
- Verify the ABI json file is not generated

## Command Run
```
eoscpp -g case1.abi types.hpp
```

## Result
```bash
1734250ms thread-0   main.cpp:58                   main                 ] 999999 abi_generation_exception: Unable to generate abi
is_builtin_type(struct_field.type) || find_struct(struct_field.type): Unknown type char * param2 ${ttt} ${sss}
    {"type":"char *","name":"param2","types":[],"structs":[]}
    thread-0  abi_generator.hpp:464 add_struct

    {}
    thread-0  abi_generator.hpp:194 handle_decl

    {"decl_location":"/home/matu/dev/abi-generator-atc/case1/types.hpp:4:8"}
    thread-0  abi_generator.hpp:551 handle_tagdecl_definition
1734250ms thread-0   main.cpp:58                   main                 ] :
```

## Conclusion
Test Pass.
ABI generator throws an error (Unknown type char * param2)
ABI file is not generated
