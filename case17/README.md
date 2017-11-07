# Case 17
- Try to generate ABI spec file with a user defined type that has the same name as a builtin type 
- Verify ABI generator throws an error
- Verify the ABI json file is not generated

## ATC (Acceptance Test Criteria)

## Command Run
```
eoscpp -g case17.abi types.hpp
```

## Result
```bash
1743425ms thread-0   main.cpp:56                   main                 ] 999999 abi_generation_exception: Unable to generate abi
!isBuiltInType(type_name): A built-in type with the same name exists, try using another name: Name
    {"type_name":"Name"}
    thread-0  abi_generator.hpp:186 handleDecl

    {}
    thread-0  abi_generator.hpp:244 handleDecl

    {"decl_location":"/home/matu/dev/abi-generator-atc/case17/types.hpp:4:8"}
    thread-0  abi_generator.hpp:143 handleTagDeclDefinition
1743425ms thread-0   main.cpp:56                   main
```

## Conclusion
Test Pass.
ABI generator throws an error (A built-in type with the same name exists, try using another name: Name)
ABI file is not generated
