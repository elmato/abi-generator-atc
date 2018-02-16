# Case 2

## ATC (Acceptance Test Criteria)

- Try to generate ABI spec file using a struct that has multiple inheritance 
- Verify ABI generator throws an error
- Verify the ABI json file is not generated

## Command Run
```
eosiocpp -g case2.abi types.hpp
```

## Result
```bash
676073ms thread-0   main.cpp:55                   main                 ] 999999 abi_generation_exception: Unable to generate abi
false: Multiple inheritance not supported - C
    {"type":"C"}
    thread-0  abi_generator.cpp:478 add_struct

    {}
    thread-0  abi_generator.cpp:168 handle_decl

    {"decl_location":"/home/matu/dev/abi-generator-atc/case2/types.hpp:11:8"}
    thread-0  abi_generator.cpp:34 handle_tagdecl_definition
676073ms thread-0   main.cpp:55                   main                 ] output: {"types":[],"structs":[],"actions":[],"tables":[]}
```

## Conclusion
Test Pass.
ABI generator throws an error (Multiple inheritance not supported - C)
ABI file is not generated
