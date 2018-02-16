# Case 20

## ATC (Acceptance Test Criteria)
- Try to generate ABI spec file with an action that has a vector of UDT as a field.
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

## Command Run
```
eosiocpp -g case20.abi types.hpp
```

## Result
```bash
Generated case20.abi ...
```

## Conclusion
Test Pass.
ABI generator succeed.
ABI file is generated as expected.
