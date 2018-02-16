# Case 13

## ATC (Acceptance Test Criteria)
- Try to generate ABI spec file with an action that uses alias for a field type (typedef)
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

## Command Run
```
eosiocpp -g case13.abi types.hpp
```

## Result
```bash
Generated case13.abi ...
```

## Conclusion
Test Pass.
ABI generator succeed.
ABI file is generated as expected.
