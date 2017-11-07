# Case 2

## ATC (Acceptance Test Criteria)

- Try to generate ABI spec file using a struct that has multiple inheritance 
- Verify ABI generator throws an error
- Verify the ABI json file is not generated

## Command Run
```
eoscpp -g case2.abi types.hpp
```

## Result
```bash
➜  case2 git:(master) ✗ eoscpp -g case2.abi types.hpp
1190868ms thread-0   main.cpp:56                   main                 ] 999999 abi_generation_exception: Unable to generate abi
false: Multiple inheritance not supported - C
    {"type":"C"}
    thread-0  abi_generator.hpp:532 addStruct

    {}
    thread-0  abi_generator.hpp:240 handleDecl

    {"decl_location":"/home/matu/dev/abi-generator-atc/case2/types.hpp:11:8"}
    thread-0  abi_generator.hpp:145 handleTagDeclDefinition
1190868ms thread-0   main.cpp:56                   main                 ] :
```

## Conclusion
Test Pass.
ABI generator throws an error (Multiple inheritance not supported - C)
ABI file is not generated
