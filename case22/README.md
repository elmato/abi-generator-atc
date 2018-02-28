# Case 22

## ATC (Acceptance Test Criteria)
- Try to generate ABI spec file with an action declared using the ACTION macro.
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

## Command Run
```
eosiocpp -g case22.abi types.hpp
```

## Result
```bash
Generated case22.abi ...
```

## Conclusion
Test Pass.
ABI generator succeed.
ABI file is generated as expected.
