# Case 23

## ATC (Acceptance Test Criteria)
- Try to generate ABI spec file for a full-contract similar to `test.system`.
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

## Command Run
```
eosiocpp -g case23.abi types.hpp
```

## Result
```bash
Generated case23.abi ...
```

## Conclusion
Test Pass.
ABI generator succeed.
ABI file is generated as expected.
