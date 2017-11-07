# Case 5

## ATC (Acceptance Test Criteria)
- Try to generate ABI spec file with an action declared as an C++ union type
- Verify ABI generator throws an error
- Verify the ABI json file is not generated

## Command Run
```
eoscpp -g case5.abi types.hpp
```

## Result
```bash
➜  case5 git:(master) ✗ eoscpp -g case5.abi types.hpp
2056924ms thread-0   main.cpp:56                   main                 ] 999999 abi_generation_exception: Unable to generate abi
type->isStructureType() || type->isClassType(): Only struct and class are supported. MyAction
    {"full_name":"MyAction"}
    thread-0  abi_generator.hpp:456 addStruct

    {}
    thread-0  abi_generator.hpp:237 handleDecl

    {"decl_location":"/home/matu/dev/abi-generator-atc/case5/types.hpp:5:7"}
    thread-0  abi_generator.hpp:142 handleTagDeclDefinition
2056924ms thread-0   main.cpp:56                   main                 ] :
```

## Conclusion
Test Pass.
ABI generator throws an error (Only struct and class are supported. MyAction)
ABI file is not generated
