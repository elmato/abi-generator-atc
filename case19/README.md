# Case 19

## ATC (Acceptance Test Criteria)
- Try to generate ABI spec file with an action that has a vector of uint8_t as a field.
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

## Command Run
```
eosiocpp -g case19.abi types.hpp
```

## Result
```bash
Generated case19.abi ...
```

## Conclusion
Test Pass.
ABI generator succeed.
ABI file is generated as expected.
