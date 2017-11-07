# Case 14

## ATC (Acceptance Test Criteria)
- Try to generate ABI spec file with a table that uses alias for a field type (typedef)
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

## Command Run
```
eoscpp -g case14.abi types.hpp
```

## Result
```bash
➜  case14 git:(master) ✗ eoscpp -g case14.abi types.hpp
Generated case14.abi ...
```

## Conclusion
Test Pass.
ABI generator succeed.
ABI file is generated as expected.
