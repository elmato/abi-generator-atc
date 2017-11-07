# Case 12

## ATC (Acceptance Test Criteria)
- Try to generate ABI spec file with a table with a long type name (> 32)
- Verify ABI generator throws an error
- Verify the ABI json file is not generated

## Command Run
```
eoscpp -g case12.abi types.hpp
```

## Result
```bash
1343446ms thread-0   main.cpp:56                   main                 ] 999999 abi_generation_exception: Unable to generate abi
name.size() <= sizeof(types::TypeName): Type name > 32, ThisIsAVeryVeryVeryVeryLongTypeName
    {"type":"ThisIsAVeryVeryVeryVeryLongTypeName","name":"ThisIsAVeryVeryVeryVeryLongTypeName","maxsize":32}
    thread-0  abi_generator.hpp:463 addStruct

    {}
    thread-0  abi_generator.hpp:238 handleDecl

    {"decl_location":"/home/matu/dev/abi-generator-atc/case12/types.hpp:4:8"}
    thread-0  abi_generator.hpp:143 handleTagDeclDefinition
1343446ms thread-0   main.cpp:56                   main 
```

## Conclusion
Test Pass.
ABI generator throws an error (Type name > 32, ThisIsAVeryVeryVeryVeryLongTypeName)
ABI file is not generated
