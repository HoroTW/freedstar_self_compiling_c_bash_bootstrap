# Self-Compiling C Script Examples

This repository contains examples of mixing C and shell scripting to create "self-compiling" and "self-executing" C scripts. These snippets demonstrate how to embed shell commands within C files to compile and execute themselves.

## Files

- **`freedstar_multiline_example.c`**: A fully multiline example using `#if 0` to embed a shell script for self-compilation and execution.
- **`freedstar_self_compiling_c_bash_bootstrap.c`**: Another multiline example showcasing a simple bootstrapper.
- **`freedstar_single_line_example.c`**: A single-line example embedding a shell command for self-compilation and execution.

## Usage

To run any of the examples:
1. Ensure you have `gcc` installed (in the single line case the path must match).
2. Execute the script directly in a shell:
   ```bash
   ./example.c
    ```
3. The script will compile itself and execute the resulting binary.
