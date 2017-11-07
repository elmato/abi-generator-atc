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
884547ms thread-0   main.cpp:56                   main                 ] 999999 abi_generation_exception: Unable to generate abi
false: Unable to guess index type
    {}
    thread-0  abi_generator.hpp:297 guessIndexType

    {"type_name":"MyTable"}
    thread-0  abi_generator.hpp:217 handleDecl

    {}
    thread-0  abi_generator.hpp:238 handleDecl

    {"decl_location":"/home/matu/dev/abi-generator-atc/case10/types.hpp:4:8"}
    thread-0  abi_generator.hpp:143 handleTagDeclDefinition
884547ms thread-0   main.cpp:56                   main                 ] : 
```

## Conclusion
Test Pass.
ABI generator throws an error (Unable to guess index type)
ABI file is not generated
