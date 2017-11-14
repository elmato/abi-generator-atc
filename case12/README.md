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
2783162ms thread-0   main.cpp:58                   main                 ] 999999 abi_generation_exception: Unable to generate abi
name.size() <= sizeof(types::type_name): Type name > 32, ThisIsAVeryVeryVeryVeryLongTypeName
    {"type":"ThisIsAVeryVeryVeryVeryLongTypeName","name":"ThisIsAVeryVeryVeryVeryLongTypeName","maxsize":32}
    thread-0  abi_generator.hpp:419 add_struct

    {}
    thread-0  abi_generator.hpp:194 handle_decl

    {"decl_location":"/home/matu/dev/abi-generator-atc/case12/types.hpp:4:8"}
    thread-0  abi_generator.hpp:551 handle_tagdecl_definition
2783162ms thread-0   main.cpp:58                   main                 ] : 
```

## Conclusion
Test Pass.
ABI generator throws an error (Type name > 32, ThisIsAVeryVeryVeryVeryLongTypeName)
ABI file is not generated
