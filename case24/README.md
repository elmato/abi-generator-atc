# Case 24

## ATC (Acceptance Test Criteria)
- Try to generate ABI spec file for a full-contract similar to `identity`.
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

## Command Run
```
eosiocpp -g case24.abi types.hpp
```

## Result
```bash
Generated case24.abi ...
```

## Conclusion
Test Pass.
ABI generator succeed.
ABI file is generated as expected.
