# Case 21

## ATC (Acceptance Test Criteria)
- Try to generate ABI spec file with an action that uses an alias (vector of UDT) for a field type.
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

## Command Run
```
eosiocpp -g case21.abi types.hpp
```

## Result
```bash
Generated case21.abi ...
```

## Conclusion
Test Pass.
ABI generator succeed.
ABI file is generated as expected.
