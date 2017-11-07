# Case 9

## ATC (Acceptance Test Criteria)
- Try to generate ABI spec file with a valid table of index type str (key/value)
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

## Command Run
```
eoscpp -g case9.abi types.hpp
```

## Result
```bash
➜  case9 git:(master) ✗ eoscpp -g case9.abi types.hpp
Generated case9.abi ...
```

## Conclusion
Test Pass.
ABI generator succeed.
ABI file is generated as expected.
