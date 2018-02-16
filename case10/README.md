# Case 10

## ATC (Acceptance Test Criteria)
- Try to generate ABI spec file with a table with an undetermined index type
- Verify ABI generator throws an error
- Verify the ABI json file is not generated

## Command Run
```
eosiocpp -g case10.abi types.hpp
```

## Result
```bash
1642743ms thread-0   main.cpp:55                   main                 ] 999999 abi_generation_exception: Unable to generate abi
false: Unable to guess index type
    {}
    thread-0  abi_generator.cpp:224 guess_index_type

    {"type_name":"MyTable"}
    thread-0  abi_generator.cpp:147 handle_decl

    {}
    thread-0  abi_generator.cpp:168 handle_decl

    {"decl_location":"/home/matu/dev/abi-generator-atc/case10/types.hpp:4:8"}
    thread-0  abi_generator.cpp:34 handle_tagdecl_definition
1642743ms thread-0   main.cpp:55                   main                 ] output: {"types":[],"structs":[{"name":"MyTable","base":"","fields":[{"name":"field1","type":"uint32"},{"name":"field2","type":"uint64"}]}],"actions":[],"tables":[]} 
```

## Conclusion
Test Pass.
ABI generator throws an error (Unable to guess index type)
ABI file is not generated
