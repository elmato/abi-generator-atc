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
866705ms thread-0   main.cpp:58                   main                 ] 999999 abi_generation_exception: Unable to generate abi
type->isStructureType() || type->isClassType(): Only struct and class are supported. MyAction
    {"full_name":"MyAction"}
    thread-0  abi_generator.hpp:415 add_struct

    {}
    thread-0  abi_generator.hpp:194 handle_decl

    {"decl_location":"/home/matu/dev/abi-generator-atc/case5/types.hpp:5:7"}
    thread-0  abi_generator.hpp:551 handle_tagdecl_definition
1866705ms thread-0   main.cpp:58                   main                 ] :
```

## Conclusion
Test Pass.
ABI generator throws an error (Only struct and class are supported. MyAction)
ABI file is not generated
