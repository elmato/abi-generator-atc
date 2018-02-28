## ABI Generator - Acceptance Test Criteria

# Case 1
- Try to generate ABI spec with an action using an unsupported type
- Verify ABI generator throws an error
- Verify the ABI json file is not generated

# Case 2
- Try to generate ABI spec file using a struct that has multiple inheritance 
- Verify ABI generator throws an error
- Verify the ABI json file is not generated

# Case 3
- Try to generate ABI spec file with a valid action 
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

# Case 4
- Try to generate ABI spec file with two valid actions that share the same interface (struct) 
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

# Case 5
- Try to generate ABI spec file with an action declared as an C++ union type
- Verify ABI generator throws an error
- Verify the ABI json file is not generated

# Case 6
- Try to generate ABI spec file with a valid table of index type i64
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

# Case 7
- Try to generate ABI spec file with a valid table of index type i64i64i64
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

# Case 8
- Try to generate ABI spec file with a valid table of index type i128i128
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

# Case 9
- Try to generate ABI spec file with a valid table of index type str (key/value)
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

# Case 10
- Try to generate ABI spec file with an undetermined index type table
- Verify ABI generator throws an error
- Verify the ABI json file is not generated

# Case 11
- Try to generate ABI spec file with a table that has a long field name (> 16)
- Verify ABI generator throws an error
- Verify the ABI json file is not generated

# Case 12
- Try to generate ABI spec file with a table with a long type name (> 32)
- Verify ABI generator throws an error
- Verify the ABI json file is not generated

# Case 13
- Try to generate ABI spec file with an action that has an alias for a field type (typedef)
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

# Case 14
- Try to generate ABI spec file with a table that uses alias for a field type (typedef)
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

# Case 15
- Try to generate ABI spec file with two actions in different namespaces with the same struct name
- Verify ABI generator throws an error
- Verify the ABI json file is not generated

# Case 16
- Try to generate ABI spec file with ABI annotations in a multi-line comment 
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

# Case 17
- Try to generate ABI spec file with a user defined type that has the same name as a builtin type 
- Verify ABI generator throws an error
- Verify the ABI json file is not generated

# Case 18
- Try to generate ABI spec file with a table that has the primary key split on many fields.
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

# Case 19
- Try to generate ABI spec file with an action that has a vector of uint8_t as a field.
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

# Case 20
- Try to generate ABI spec file with an action that has a vector of structs as a field.
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

# Case 21
- Try to generate ABI spec file with an action that uses an alias of a vector for a field type.
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

# Case 22
- Try to generate ABI spec file with an action declared using the ACTION macro.
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

# Case 23
- Try to generate ABI spec file for a full-contract similar to `test.system`.
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

# Case 24
- Try to generate ABI spec file for a full-contract similar to `identity`.
- Verify ABI generator succeed
- Verify the ABI json file is as expected (abi-expected.json)

Details are inside each case subfolder   
