# cpp-rust-wrapper

A simple rust wrapper over native c++ code.

1. A C++ class, ZZZx, is defined.
2. A C wrapper over the C++ code is defined.
3. Rust calls the C code using no external functionality.

## Build

A bit of debugging the result is required, but running

```bash
gcc -o ZZZx.cpp wrapper.cpp c_example.c
```

in ```src``` Should run the C example. The Rust code will be updated shortly.
