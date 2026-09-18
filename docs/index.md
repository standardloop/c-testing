# API Reference

## Macros

---

### TestCaseVerify

```cpp
#define TestCaseVerify(run, name, condition) testing(run, name, (condition), #condition, __FILE__, __LINE__)
```

The main point of this library, a macro for checking a test case instead of using `assert()`.

## Functions

---

### TestingInit

```cpp
void TestingInit(void)
```

A function to Initialize a Testing Run.

---

### TestingTearDown

```cpp
void TestingTearDown(void)
```

A function to Complete and Tear Down a Testing Run.
