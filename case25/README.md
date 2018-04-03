# Case 25

## ATC (Acceptance Test Criteria)
- Try to generate ABI spec file using the new contract format (like `simple.token`).
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

## Command Run
```
eosiocpp -g case25.abi contract.cpp
```

## Result
```bash
Generated case25.abi ...
```

## Conclusion
Test Pass.
ABI generator succeed.
ABI file is generated as expected.
