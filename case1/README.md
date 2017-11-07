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
➜  case1 git:(master) ✗ eoscpp -g case1.abi types.hpp
1565766ms thread-0   main.cpp:56                   main                 ] 999999 abi_generation_exception: Unable to generate abi
isBuiltInType(struct_field.type) || findStruct(struct_field.type): Unknown type char * param2 [] []
    {"type":"char *","name":"param2","ttt":[],"sss":[]}
    thread-0  abi_generator.hpp:568 addStruct

    {}
    thread-0  abi_generator.hpp:240 handleDecl

    {"decl_location":"/home/matu/dev/abi-generator-atc/case1/types.hpp:4:8"}
    thread-0  abi_generator.hpp:145 handleTagDeclDefinition
1565766ms thread-0   main.cpp:56                   main                 ] :
```

## Conclusion
Test Pass.
ABI generator throws an error (Unknown type char * param2)
ABI file is not generated
