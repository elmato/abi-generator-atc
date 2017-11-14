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
3121241ms thread-0   main.cpp:58                   main                 ] 999999 abi_generation_exception: Unable to generate abi
itr->second == full_name: Unable to add type 'ns2::Simple' because 'ns1::Simple' is already in.
[]
    {"full_name":"ns2::Simple","conflict":"ns1::Simple","t":[]}
    thread-0  abi_generator.hpp:424 add_struct

    {}
    thread-0  abi_generator.hpp:194 handle_decl

    {"decl_location":"/home/matu/dev/abi-generator-atc/case15/types.hpp:16:8"}
    thread-0  abi_generator.hpp:551 handle_tagdecl_definition
3121241ms thread-0   main.cpp:58                   main                 ] :
```

## Conclusion
Test Pass.
ABI generator throws an error (Unable to add type 'ns2::Simple' because 'ns1::Simple' is already in)
ABI file is not generated
