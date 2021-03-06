# Case 11

## ATC (Acceptance Test Criteria)
- Try to generate ABI spec file with a table that has a long field name (> 16)
- Verify ABI generator throws an error
- Verify the ABI json file is not generated

## Command Run
```
eosiocpp -g case11.abi types.hpp
```

## Result
```bash
1728401ms thread-0   main.cpp:55                   main                 ] 999999 abi_generation_exception: Unable to generate abi
field->getNameAsString().size() <= sizeof(decltype(struct_field.name)): Field name > 16, MyTable::thisisaverylongfieldname
    {"type":"MyTable","name":"thisisaverylongfieldname","maxsize":16}
    thread-0  abi_generator.cpp:498 add_struct

    {}
    thread-0  abi_generator.cpp:168 handle_decl

    {"decl_location":"/home/matu/dev/abi-generator-atc/case11/types.hpp:4:8"}
    thread-0  abi_generator.cpp:34 handle_tagdecl_definition
1728401ms thread-0   main.cpp:55                   main                 ] output: {"types":[],"structs":[],"actions":[],"tables":[]}
```

## Conclusion
Test Pass.
ABI generator throws an error (Field name > 16, MyTable::thisisaverylongfieldname)
ABI file is not generated
