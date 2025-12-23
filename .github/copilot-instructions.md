## Purpose
Short, focused instructions to help AI coding agents be productive in this repository.

## What this repo is (big picture)
- Tiny collection of single-file C examples for embedded learning. Current files:
  - `tempcontrol.c` — simple command-line program that reads a desired temperature and prints a confirmation. It initializes `curr_temp = 25` and uses `scanf`/`printf` for I/O.
  - `README.md` — project header only; no build or contribution docs present.

## Build / run / debug (explicit)
- The project uses MinGW GCC on Windows. Typical compile command (PowerShell):
  - `C:\MinGW\bin\gcc.exe -g tempcontrol.c -o tempcontrol.exe`
- Run in PowerShell: `.\	empcontrol.exe`
- VS Code build task present: "C/C++: gcc.exe build active file" — it compiles the active file with `-g` and drops the exe next to the source.
- Debugging in VS Code uses the C++ (cppdbg) debugger configuration that launches the built executable (look for a launch configuration in your workspace or the Debug panel).

## Project-specific conventions and patterns (discoverable)
- Single-file programs in the repository root; source files use lowercase names (e.g. `tempcontrol.c`).
- Programs use stdio I/O (`printf` / `scanf`) and expect console interaction.
- Compiler/debug flags: use `-g` for builds to preserve debugging symbols.

## Integration points & external dependencies
- Assumes an installed MinGW toolchain at `C:\MinGW\bin\gcc.exe` (or equivalent in PATH). There are currently no external libraries or package manifests.

## Typical change requests an AI agent will be asked to do (how to approach)
- Add a new feature to `tempcontrol.c` (e.g., input validation): edit the single source file, build with the task, and run the exe to verify behavior.
- Add unit tests: none exist. If requested, propose adding a small C test harness (e.g., separate .c file that runs functions) or recommend switching to a C testing framework — but only add after confirming the user's preferences.

## Concrete examples (copyable) — build & run
- Compile current file with debug symbols:
  - `C:\MinGW\bin\gcc.exe -g tempcontrol.c -o tempcontrol.exe`
- Run:
  - `.\	empcontrol.exe`

## What not to assume
- There is no Makefile, no CI, and no cross-compile toolchain files in the repo — do not add complex build infra without asking.
- No tests or linting configs are present. Keep changes minimal and validated locally.

## Files to check when implementing change
- `tempcontrol.c` — the program you will edit and test.
- `README.md` — repository description (currently minimal).

## Quick pairing hints for reviewers
- Run the VS Code build task after edits or compile from PowerShell to confirm there are no compiler errors.
- Prefer small, incremental edits and run the executable to validate console behavior (use sample inputs like `22`).

If any of the above assumptions are incorrect or you want a different build/debug workflow (for example, WSL or a Makefile), tell me which direction to take and I will update these instructions.

---
Generated/merged by an AI assistant after scanning the repository. Ask me to expand any section or to add a `Makefile` / CI if you want it wired up.
