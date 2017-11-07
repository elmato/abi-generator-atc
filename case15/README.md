# Case 15

## ATC (Acceptance Test Criteria)
- Try to generate ABI spec file with two actions in different namespaces with the same struct name
- Verify ABI generator throws an error
- Verify the ABI json file is not generated

## Command Run
```
eoscpp -g case15.abi types.hpp
```

## Result
```bash
831092ms thread-0   main.cpp:56                   main                 ] 999999 abi_generation_exception: Unable to generate abi
itr->second == full_name: Unable to add type 'ns2::Simple' because 'ns1::Simple' is already in.
[]
    {"full_name":"ns2::Simple","conflict":"ns1::Simple","t":[]}
    thread-0  abi_generator.hpp:468 addStruct

    {}
    thread-0  abi_generator.hpp:238 handleDecl

    {"decl_location":"/home/matu/dev/abi-generator-atc/case15/types.hpp:16:8"}
    thread-0  abi_generator.hpp:143 handleTagDeclDefinition
831092ms thread-0   main.cpp:56                   main
```

## Conclusion
Test Pass.
ABI generator throws an error (Unable to add type 'ns2::Simple' because 'ns1::Simple' is already in)
ABI file is not generated
