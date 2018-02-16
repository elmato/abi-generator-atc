# Case 17
- Try to generate ABI spec file with a user defined type that has the same name as a builtin type 
- Verify ABI generator throws an error
- Verify the ABI json file is not generated

## ATC (Acceptance Test Criteria)

## Command Run
```
eosiocpp -g case17.abi types.hpp
```

## Result
```bash
2122206ms thread-0   main.cpp:55                   main                 ] 999999 abi_generation_exception: Unable to generate abi
!is_builtin_type(type_name): A built-in type with the same name exists, try using another name: abi_def
    {"type_name":"abi_def"}
    thread-0  abi_generator.cpp:110 handle_decl

    {}
    thread-0  abi_generator.cpp:168 handle_decl

    {"decl_location":"/home/matu/dev/abi-generator-atc/case17/types.hpp:4:8"}
    thread-0  abi_generator.cpp:34 handle_tagdecl_definition
2122206ms thread-0   main.cpp:55                   main                 ] output: {"types":[],"structs":[],"actions":[],"tables":[]}
```

## Conclusion
Test Pass.
ABI generator throws an error (A built-in type with the same name exists, try using another name: abi_def)
ABI file is not generated
