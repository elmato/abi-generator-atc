# Case 1

## ATC (Acceptance Test Criteria)

- Try to generate ABI spec file having an unsupported C++ type in a struct
- Verify ABI generator throws an error
- Verify the ABI json file is not generated

## Command Run
```
eosiocpp -g case1.abi types.hpp
```

## Result
```bash
607699ms thread-0   main.cpp:55                   main                 ] 999999 abi_generation_exception: Unable to generate abi
is_builtin_type(element_type) || find_struct(element_type): Unknown type char * char * param2 ${ttt} ${sss} {"types":[],"structs":[],"actions":[],"tables":[]}
    {"ftype":"char *","type":"char *","name":"param2","types":[],"structs":[],"abi":{"types":[],"structs":[],"actions":[],"tables":[]}}
    thread-0  abi_generator.cpp:504 add_struct

    {}
    thread-0  abi_generator.cpp:168 handle_decl

    {"decl_location":"/home/matu/dev/abi-generator-atc/case1/types.hpp:4:8"}
    thread-0  abi_generator.cpp:34 handle_tagdecl_definition
607699ms thread-0   main.cpp:55                   main                 ] output: {"types":[],"structs":[],"actions":[],"tables":[]}
```

## Conclusion
Test Pass.
ABI generator throws an error (Unknown type char * param2)
ABI file is not generated
