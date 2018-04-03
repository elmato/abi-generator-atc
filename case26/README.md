# Case 26

## ATC (Acceptance Test Criteria)
- Try to generate ABI spec file of a contract that inherits from another contract.
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

## Command Run
```
eosiocpp -g case26.abi contract.cpp
```

## Result
```bash
Generated case26.abi ...
```

## Conclusion
Test Pass.
ABI generator succeed.
ABI file is generated as expected.
