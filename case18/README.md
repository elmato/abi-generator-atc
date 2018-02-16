# Case 18

## ATC (Acceptance Test Criteria)
- Try to generate ABI spec file with a table that has the primary key split on many fields.
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

## Command Run
```
eosiocpp -g case18.abi types.hpp
```

## Result
```bash
Generated case18.abi ...
```

## Conclusion
Test Pass.
ABI generator succeed.
ABI file is generated as expected.
