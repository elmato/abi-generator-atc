# Case 3

## ATC (Acceptance Test Criteria)

- Try to generate ABI spec file with a valid action 
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

## Command Run
```
eoscpp -g case2.abi types.hpp
```

## Result
```bash
➜  case3 git:(master) ✗ eoscpp -g case3.abi types.hpp
Generated case3.abi ...
```

## Conclusion
Test Pass.
ABI generator succeed.
ABI file is generated as expected.
