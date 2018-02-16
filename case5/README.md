# Case 5

## ATC (Acceptance Test Criteria)
- Try to generate ABI spec file with an action declared as an C++ union type
- Verify ABI generator throws an error
- Verify the ABI json file is not generated

## Command Run
```
eosiocpp -g case5.abi types.hpp
```

## Result
```bash
984125ms thread-0   main.cpp:55                   main                 ] 999999 abi_generation_exception: Unable to generate abi
type->isStructureType() || type->isClassType(): Only struct and class are supported. MyAction
    {"full_name":"MyAction"}
    thread-0  abi_generator.cpp:461 add_struct

    {}
    thread-0  abi_generator.cpp:168 handle_decl

    {"decl_location":"/home/matu/dev/abi-generator-atc/case5/types.hpp:4:7"}
    thread-0  abi_generator.cpp:34 handle_tagdecl_definition
984125ms thread-0   main.cpp:55                   main                 ] output: {"types":[],"structs":[],"actions":[],"tables":[]}
```

## Conclusion
Test Pass.
ABI generator throws an error (Only struct and class are supported. MyAction)
ABI file is not generated
